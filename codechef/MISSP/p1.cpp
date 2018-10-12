#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int n;
    int tmp;
    int tmp2;
    while(T--)
    {
        cin >> n;
        tmp = tmp2 = 0;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            tmp2 = tmp2^tmp;
        }
        cout << tmp2 << endl;
    }   
    
    return 0;
}
