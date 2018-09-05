#include <iostream>
#include <vector>

using namespace std;

int maxSumPath(vector< vector<int>> a);

int main()
{
    int T;
    cin >> T;
    int a,b,c;
    while(T--)
    {
        cin >> a >> b;
        c = (a<b) ? b : a;
        cout << c << " " ;
        cout << a + b  << endl;
    }
    return 0;
}


