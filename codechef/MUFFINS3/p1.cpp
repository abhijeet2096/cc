#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int T;
    cin >> T;
    long long N;

    while(T--)
    {
        cin >> N;
        cout << N/2 + 1 << endl;
    }
    
    return 0;
}
