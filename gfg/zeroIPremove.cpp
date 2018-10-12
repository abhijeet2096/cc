#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        string s;
        cin >> s;
        int i=0,tmp;
        while(true)
        {
            tmp = 100*(static_cast<int>(s[i]) - '0') + 10*(static_cast<int>(s[i+1]) - '0') + 1*(static_cast<int>(s[i+2]) - '0');
            i+=4;
            cout << tmp;
            if(i<15)
                cout << ".";
            else
                break;
        }
        cout << endl;
    }
    return 0;
}