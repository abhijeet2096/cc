#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T; cin >> T;
    while(T--)
    {
        int N,D;
        cin >> N >> D;
        long long int odd=0,even=0;
        vector<int> P(N,0),C(N,0);
        
        for(int i=0; i < N; i++)
            cin >> C[i];
        for(int i=0; i < N; i++)
            cin >> P[i];
        for(int i=0; i < N; i++)
            if(C[i]%2 == 0)
                even += P[i];
            else
                odd += P[i];
        
        if(D%2==0)
            cout << odd << endl;
        else
            cout << even << endl;
    }
    return 0;
}