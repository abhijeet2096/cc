#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    string s;
    while(T--)
    {
        cin >> s;
        string s2(s);
        reverse(s2.begin(),s2.end());
        if(s.compare(s2) == 0)
            cout << "wins" << endl;
        else
            cout << "losses" << endl;
    }
    return 0;
}
