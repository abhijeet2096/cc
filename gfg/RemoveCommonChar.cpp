#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T; cin >> T;
    while(T--)
    {
        string a,b;
        cin >> a >> b;

        set<char> common;

        for(int i=0;i<b.length();i++)
            for(int j=0;j<a.length();j++)
            {
                if(a[j]==b[i])
                    common.insert(a[j]);             
            }
        bool f1=true,f2=true;
        for(int j=0;j<a.length();j++)
            if(!(common.find(a[j]) != common.end()))
                {cout << a[j];f1=false;}

        for(int j=0;j<b.length();j++)
            if(!(common.find(b[j]) != common.end()))
                {cout << b[j];f2=false;}

        if(f1&&f2) cout << "-1";
        cout << endl;
    }
    return 0;
}