#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    vector<int> a;
        
    int in;
    
    while(T--)
    {
        cin >> in;
        a.push_back(in);
    }
    
    sort(a.begin(),a.begin() + a.size());
    
    for(auto i = a.begin(); i != a.end(); i++)
        cout << *i << endl; 
    
    
    return 0;
}
