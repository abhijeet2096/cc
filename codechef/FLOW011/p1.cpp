#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    float base;
    while(T--)
    {
        cin >> base;
        cout << fixed << showpoint ;
        if(base < 1500)
        {
            cout << setprecision(2) << base*(1 + .1 + .9) << endl;
        }
        else
        {
            cout << setprecision(2) << base*(1 + .98) + 500 << endl;
        }
    }   
    
    return 0;
}
