#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        int t;
        cin >> n;
        if(n%2 == 0)
        {
            t = (n-1)/2;
        }
        else
        {
            t = (n-3)/2;
        }
        cout << "1 " << pow(10,t) << "\n";
    }
    return 0;
}
