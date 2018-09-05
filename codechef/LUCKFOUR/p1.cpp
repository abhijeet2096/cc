#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    int n;
    int ctr = 0;
    while(T--)
    {
        cin >> n;
        ctr = 0;
        while(n != 0)
        {
            if(n%10 == 4)
                ctr++;
            n = n/10;
        }
        cout << ctr << endl;
    }
    return 0;
}
