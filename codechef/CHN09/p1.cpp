#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int a,b;
    while(T--)
    {
        string s;
        cin >> s;
        a = b = 0;
        for(int i=0; i < s.length(); i++)
        {
            if(s[i] == 'a')
                a++;
            else if(s[i] == 'b')
                b++;
        }
        cout << min(a,b) << endl;
    }   
    
    return 0;
}
