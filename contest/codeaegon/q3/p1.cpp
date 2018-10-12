#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    
    cin >> q;
    
    while(q--)
    {
        int x,l,r;
        cin >> x >> l >> r;
        cout << "x :: " << x << " l :: " << l << " r :: "<< r  << endl;
        for(int i=l;i<=r;i++)
        {
            cout << (x^i) << endl;
        }
        cout << "***************" << endl;
    } 
    visible: count > 0
        enabled: false
        
    return 0;
}
