#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    int N;
    int count;
    int a,b,c,d,e,f;
    while(T--)
    {
        cin >> N;
        a=N/100;
        b=(N-a*100)/50;
        c=(N-a*100 - b*50)/10;
        d=(N-a*100 - b*50 -c*10)/5;
        e=(N-a*100 - b*50 -c*10 -d*5)/2;
        f=(N-a*100 - b*50 -c*10 -d*5 - e*2);
        
        cout << a+b+c+d+e+f << endl;
        
    }
    return 0;
}
