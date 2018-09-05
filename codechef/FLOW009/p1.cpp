#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int q;
        int p;
        cin >> q >> p;
        cout << fixed << showpoint;
        
        if(q >1000)
            cout << setprecision(6) << (static_cast< float >(q*p)*.9) << endl;
        else
            cout << setprecision(6) << (static_cast< float >(q*p)) << endl;
    }   
    
    return 0;
}
