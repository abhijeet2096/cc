#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    string s1,s2;
    bool flag = false;
    while(T--)
    {
       cin >> s1 >> s2;
        for(int i=0; i < s1.length(); i++)
        {
            if(s1[i] == s2[i])
            {
                if(s1[i] != '?')
                {
                    flag = true;
                     continue;
                }
                else
                {
                    flag = true;
                    continue;
                }
            }
            else if(s1[i] == '?' || s2[i] == '?')
            {
                flag = true;
                continue;
            }
            else
            {
                flag = false;
                cout << "No" << endl;
                break;
            }
        }
        if(flag)
            cout << "Yes" << endl;
    }   
    
    return 0;
}
