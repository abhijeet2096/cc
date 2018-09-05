#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


long long int fac(int a,vector<long long int>& b);

int main()
{
    int T;
    cin >> T;
    int a;
    vector<long long int> b(21,0);
    b[0] = 0;
    b[1] = 1;
    while(T--)
    {
        cin >> a;
        cout << fac(a,b) << endl;
    }
    return 0;
}


long long int fac(int a,vector<long long int>& b)
{
    if(a == 0)
        return 1;
    else
    {
        if(b[a] == 0)
            b[a] = a*fac(a-1,b);

        return b[a];
    }
}

