#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int a,b;
        cin >> a >> b ;
        unsigned long long int gcd = __gcd(a,b);
        unsigned long long int lcm = (a*b)/gcd;
        cout << gcd << " " << lcm << endl;
    }   
    
    return 0;
}
