#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSumPath(vector< vector<int>> a);

int main()
{
    int T;
    cin >> T;
    vector<int> a(3,0);
    while(T--)
    {
        for(int i=0; i< a.size(); i++)
            cin >> a[i];
        sort(a.begin() ,a.begin() + a.size());
        cout << a[1] << endl;
    }
    return 0;
}


