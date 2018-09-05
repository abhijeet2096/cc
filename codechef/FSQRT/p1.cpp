#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int n;
    
    while(T--)
    {
        cin >> n;
        cout << int(sqrt(n)) << endl;
    }
    return 0;
}
