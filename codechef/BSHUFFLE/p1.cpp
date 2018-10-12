#include <bits/stdc++.h>

using namespace std;

void print(vector<int> &s){
    for(int i = 0; i < s.size(); i++){
        cout << s[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    
    vector<int> yoyo(N,0);
    vector<int> yoyo2(N,0);
    
    for(int i=0; i<N; i++)
    {
        yoyo[i] = i+1;
    }
    
    int midpoint = (N%2==0) ? N/2 : (N+1)/2;  
    
    for(int i=0; i<midpoint-1; i++)
    {
        yoyo2[i] = yoyo[i+1];
    }
    yoyo2[midpoint-1] = yoyo[0];
    
    for(int i=midpoint; i<N-1; i++)
    {
        yoyo2[i] = yoyo[i+1];
    }
    
    yoyo2[N-1] = yoyo[midpoint];
    
    print(yoyo2);
    
    
    cout << N;
    for(int i=0; i<N-1; i++)
        cout << " " <<  i+1;
    cout << endl;
    
    return 0;
}

