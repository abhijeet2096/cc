#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        string a;
        cin >> a;

        if(static_cast<int>(a[a.length()-1]) - '0' <= 5)
        {
            for(int i=0; i < a.length()-1; i++)
                cout << a[i];
            cout  << "0" << endl;
        }
        
        else
        {
            vector<int> after;
            after.push_back(0);
            int i=1;

            if(a.length() >=2  && (static_cast<int>(a[a.length() - 1 -i]) - '0' == 9))
            {
                while(static_cast<int>(a[a.length() - 1 -i]) - '0' == 9)
                {
                    after.push_back(0);
                    i++;
                } 
                if(i <= a.length()-1)
                    a[a.length()-1-i] = static_cast<char>(static_cast<int>(a[a.length() - 1 -i]) + 1);
            }
            else
            {
                if(a.length() >= 2)
                    a[a.length()-1-i] = static_cast<char>(static_cast<int>(a[a.length() - 1 -i]) + 1);
            }
            if(i == a.length())
            {   
                after.push_back(1);
                for(auto j=after.rbegin(); j != after.rend(); j++)
                    cout << *j;
                cout << endl;
            }
            else
            {
                for(int j=0; j < a.length()-i; j++)
                    cout << a[j];
                
               // cout << "After Size : " << after.size() << endl;
                for(auto j = after.rbegin(); j != after.rend(); j++)
                    cout << *j;
                cout << endl;
            }
        }
        
    }
    return 0;
}