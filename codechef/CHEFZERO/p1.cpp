#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,M,K;
    cin >> N >> M >> K;
    
    vector<vector<int>> a;
    
    for(int i=0; i<N; i++)
    {
        vector<int> b(M,0);
        for(int j=0; j<M; j++)
        {
            cin >> b[j];
        }
        a.push_back(b);
    }
    
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<a[i].size(); j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
