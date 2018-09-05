#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int n;
    int a,b;
    while(T--)
    {
        cin >> n;
        a = n%10;
        while(n != 0)
        {
            b = n%10;
            n = n/10;
        }
        
        cout << a + b << endl;
    }
    return 0;
}
