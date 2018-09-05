#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    string s;
    
    while(T--)
    {
        map<char,int> a;
        cin >> s;
        for(int i=0; i<s.length(); i++)
        {
            a[s[i]] = 0;
        }
        for(int i=0; i<s.length(); i++)
        {
            a[s[i]]++;
        }
        vector<int> b;
        int totalSum = 0;
        for(auto i=a.cbegin(); i!=a.cend(); i++)
        {
            b.push_back((i)->second);
            totalSum+=(i)->second;
        }
        sort(b.begin(),b.begin() + b.size());
        
        if(2*b[b.size()-1] == totalSum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }   
    
    return 0;
}
