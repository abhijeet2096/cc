#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    int a,b,c;
    while(T--)
    {
        cin >> a >> b >> c;
        if(a+b+c == 180)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    return 0;
}
