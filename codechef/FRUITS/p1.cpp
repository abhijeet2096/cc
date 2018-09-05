#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int N,M,K;
    while(T--)
    {
        cin >> N >> M >> K;
        cout << ((abs(N-M) < K)? 0 : (abs(N-M) - K)) << endl;
    }   
    
    return 0;
}
