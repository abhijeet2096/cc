#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int maxSumPath(vector< vector<int>> a);

int main()
{
    int T;
    cin >> T;
    int n;
    int b;
    while(T--)
    {
        cin >> n;
        vector<vector<int>> a;
        vector<int> c;
        
        for(int i=1; i<=n; i++)
        {
            
            for(int j=0; j< i; j++ )
            {
                cin >> b;
                c.push_back(b);
            }
            a.push_back(c);
            c.clear();
        }
        cout << maxSumPath(a) << endl;
    }
    return 0;
}

int maxSumPath(vector< vector<int> > a)
{
    for(int i = a.size() - 2; i >= 0 ; i--)
    {
        for(int j = 0; j <= a[i].size()-1; j++)
        {
            if(a[i+1][j] > a[i+1][j+1])
                a[i][j] += a[i+1][j];
            else
                a[i][j] += a[i+1][j+1];
        }
    }
    return a[0][0];
}
