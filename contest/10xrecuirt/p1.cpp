#include <bits/stdc++.h>

using namespace std;

void displayServerStatus(const vector<vector<int>> &a);
void processServers(vector<vector<int>> &a,int processTillThisTime,int processingTime);
pair<int,int> checkAvailableServer(vector<vector<int>> &a,int &nS, int k);

int main()
{
    int N,K;
    
    cin >> N >> K;
    
    int processingTime = 1000;
    int nS = 1;
    vector<vector<int>> a;
    int request,request_P;
    pair<int,int> serverRequested;
    
    // BootStraping The First Request
    cin >> request;
    vector<int> b(K,0);
    b[0] = request;
    a.push_back(b);
    //displayServerStatus(a);
    
    request_P = request;
    
    for(int i=1; i<N; i++)
    {
        cin >> request;   
        if(request == request_P) //Check if there aren't  simultaneous Request
        {
            while(request == request_P)
            {
                serverRequested = checkAvailableServer(a,nS,K);
                a[serverRequested.first][serverRequested.second] = request;
                i+=1;
                cin >> request;
            }
        }
        processServers(a,request,processingTime);
        serverRequested = checkAvailableServer(a,nS,K);
        a[serverRequested.first][serverRequested.second] = request;
        request_P = request;
        //displayServerStatus(a);
    }
    
    
    cout << nS << endl;
    return 0;
}

// Utility Function To Display Server Status
void displayServerStatus(const vector<vector<int>> &a)
{
    cout << "---------------------------------------------\n";
    cout << "S\\N\t";
    for(int i=0; i < a[0].size(); i++)
    {
        cout << "N" << i+1 << "\t";
    }
    cout << endl;
    
    for(int i=0; i < a.size(); i++)
    {   
        cout << "S" << i+1 << "\t";
        for(int j=0; j < a[i].size(); j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "---------------------------------------------\n";
}

// Iterates over server and Virtually Proceses Request
void processServers(vector<vector<int>> &a,int processTillThisTime,int processingTime)
{
    int tmp;
    for(int i=0; i < a.size(); i++)
    {
        for(int j=0; j < a[i].size(); j++)
        {
            tmp = processingTime - (processTillThisTime - a[i][j]);
            a[i][j] = (tmp <= 0) ?  0 :  a[i][j];
        }
    }
}


// Checks for First Available Server and returns a Pair of Index, representing the 
// The Computer and Slot, Will Also Increase the Server Number, if Server isn't Available
pair<int,int> checkAvailableServer(vector<vector<int>> &a,int &nS, int k)
{
    pair<int,int> availableServer;
    bool flag = false; // Boolean Flag Representing availablity of servers
    
    for(int i=0; i < a.size(); i++)
    {
        for(int j=0; j < a[i].size(); j++)
        {
            if(a[i][j] == 0)
            {
                availableServer.first = i;
                availableServer.second = j;
                flag = true; 
                return availableServer;
            }
        }
    }
    
    // Case When Server isn't Available, Add More Server
    if(!flag)
    {
        vector<int> b(k,0);
        a.push_back(b);
        availableServer.first = a.size() - 1;
        availableServer.second = 0;
        nS++;
    }
    
    return availableServer;
}

