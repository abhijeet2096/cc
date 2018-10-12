#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int a,b;
    int x;
    while(T--)
    {
        cin >> a >> b ;
        x = __gcd(a,b);
        cout << a*b/x/x << endl;
    }   
    
    return 0;
}
