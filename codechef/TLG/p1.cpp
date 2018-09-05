#include <iostream>
#include <climits>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int b,c;
    int d = 0,e = 0;
    vector<int> a;
    
    while(T--)
    {
        cin >> b >> c;
        d += b;
        e += c;
        a.push_back(d-e);
    }
    
    int min = INT_MAX;
    int max = INT_MIN;
    for(auto i = a.begin(); i != a.end(); i++)
    {
        if(*i >= max)
            max = *i;
        if(*i <= min)
            min = *i;
    }
    
    if(max > abs(min))
        cout << "1 " << max << endl;
    else if(max < abs(min))
        cout << "2 " << abs(min) << endl;
    return 0;
}
