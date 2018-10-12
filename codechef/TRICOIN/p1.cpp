#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    long long int k;
    float maxH;
    while(T--)
    {
        cin >> k;
        maxH = (-1 +sqrtl(8*k+1))/2.0;
        cout << floor(maxH) << endl;
    }   
    
    return 0;
}
