#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    string s1,s2;
    int match;
    int que;
    while(T--)
    {
        match = que = 0; 
        cin >> s1 >> s2;
        for(int i=0; i < s1.length(); i++)
        {
            if(s1[i] == s2[i])
            {
                if(s1[i] != '?')
                    match++;
                else
                    que++;
            }
            else if(s1[i] == '?' || s2[i] == '?')
                que++;
        }
        cout << s1.length() - match - que << " " << s1.length() - match << endl;
    }   
    
    return 0;
}
