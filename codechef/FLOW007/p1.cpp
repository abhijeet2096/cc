#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int n;
    vector<int> a;
    int b=0;
    
    while(T--)
    {
        cin >> n;
        b = 0;
        while(n != 0)
        {
            a.push_back(n%10);
            n = n/10;
        }
        
        for(int i = 0 ; i < a.size() ; i++)
        {
            b += (a[i])*pow(10,a.size() - i - 1);
        }
        
        cout << b << endl;
        a.clear();
    }
    return 0;
}
