#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a;
    int tmp;
    int ce =0;
    for(int i=0; i < n ; i++)
    {
        cin >> tmp;
        if(tmp%2 == 0)
            ce++;
    }
    
    if(ce > n/2)
        cout << "READY FOR BATTLE" << endl;
    else
        cout << "NOT READY" << endl;
    
    return 0;
}
