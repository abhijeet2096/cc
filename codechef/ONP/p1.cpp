#include <iostream>
#include <string>
#include <vector>
#include <stack>

using  namespace std;

int main()
{
    int T;
    cin >> T;
    
    string s;
    while(T--)
    {
        cin >> s;
        vector<char> exp(s.begin(),s.end());
        stack<char> stac;
        for(auto i = s.begin(); i != s.end(); i++)
        {
            if(isalpha(*i)) // is Char
            {   
                cout << *i;
            }
            else if(*i == '+' || *i == '-' || *i == '*' || *i == '/' ||*i == '%' || *i == '^' ) // is operator
            {
                stac.push(*i);
            }
            else if(*i == '(') // is open bracket
            {
                stac.push(*i);
            }
            else if(*i == ')') // is close bracket
            {
                while(stac.top() != '(')
                {
                    cout << stac.top();
                    stac.pop();
                }
                stac.pop();
            }
            
        }
        cout << endl;
        while(!stac.empty())
            stac.pop();
        exp.clear();
            
    }
    return 0;
}
