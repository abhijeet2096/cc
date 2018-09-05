#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int n,t;
    int ctr;
    while(T--)
    {
        ctr = 0;
        cin >> n;
        while(t != 0)
        {
            t = log2(n);
            if(t > 11)
                t = 11;
            n = n - pow(2,t);
            ctr++;
            if(n == 0)
                break;
        }
        t = 5;
        cout << ctr << endl;
    }
    return 0;
    
}
