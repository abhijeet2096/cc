#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int a,ctr;
    
    while(T--)
    {
        cin >> a;
        ctr = 0;
        while(a != 0)
        {
            ctr += (a%10);
            a = a/10;
        }
        cout << ctr << endl;
    }
    
    return 0;
}
