#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string d("CHEF");
    int A,B,C,D;
    int ct = 0;
    int mainCounter = 0;
    vector<int> mydeletelist;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == d[ct])
        {
            mydeletelist.push_back(i);
            ct++;
            if(ct == 4)
            {
                mainCounter++;
                i = 0;
                ct = 0;
                for(int j=0; j < mydeletelist.size(); j++)
                {
                    s[mydeletelist[j]] = '0';
                }
                mydeletelist.clear();
            }
        }
    }
    
    cout << mainCounter << endl;
    
    return 0;
}
