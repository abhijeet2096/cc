#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int a,b;
    while(T--)
    {
        cin >> a >> b;
        if(a < b)
            cout << "<" << endl;
        else if(a == b)
            cout << "=" << endl;
        else
            cout << ">" << endl;

    }
    return 0;
}
