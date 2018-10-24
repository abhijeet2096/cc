#include<bits/stdc++.h>

using namespace std;

int getMeMySolution(vector<int> a);
void printMatrix(vector<vector<int>> a);
vector<vector<int>> getMeMySolution2(vector<int> a);

int main()
{
    int T; cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        vector<int> a(N,0);
        for(int i=0;i<N;i++)
        {
            cin >> a[i];
        }
        // write code for condn n ==3
        if(N==3)
        {
            cout << "(";
            for(int i=0;i<N;i++)
                cout << static_cast<char>('A' + i);
            cout << ")" << endl;
            continue;
        }
        
        vector<vector<int>> c = getMeMySolution2(a);
        printMatrix(c);

    }
    return 0;
}


int getMeMySolution(vector<int> a)
{
    if(a.size() < 3) return 0;
    else if(a.size() == 3) return a[0]*a[1]*a[2];
    int N = a.size();
    vector<vector<int>> b(N,vector<int>(N,0));
    for(int i=N-3;i>=0;i--)
    {
        //cout << "YOYO" << endl;
        for(int j=i+2;j<N;j++)
        {
            int minT = INT_MAX;
            for(int k=j-1;k>i;k--)
            {
                minT = min(minT,b[i][k] + a[i] * a[k] * a[j] + b[k][j]);
            }
            printMatrix(b);
            if(minT != INT_MAX)
                {b[i][j] = minT;printMatrix(b);}
        }
    }
    return b[0][N-1];
}

void printMatrix(vector<vector<int>> a)
{
    int N = a.size();
    cout << endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

vector<vector<int>> getMeMySolution2(vector<int> a)
{
    int n=a.size();

    vector<vector<int>> b(n,vector<int>(n,0));
    vector<vector<int>> c(n,vector<int>(n,0));

    for(int i=(n-1)-2; i>=0; i--)
    {
        for(int j=i+2; j<n; j++)
        {
           // cout << "i : " << i + 1 << " j : " << j + 1<< endl;
            int val = INT_MAX;
            int val2;
            for(int k=i+1;k<j;k++)
            {
                //cout << k + 1 << " " << endl;
                val2  = b[i][k] + a[i]*a[j]*a[k] + b[k][j];
                if(val2 < val)
                {
                    val = val2;
                    c[i][j] = k;
                }
            }
            //printMatrix(b);
            if(val != INT_MAX) b[i][j] = val;
        }
    }

    return c;
}

//Matrix Chain Multiplicatijon by a musu abdul bari
//Boolean Parenthzization