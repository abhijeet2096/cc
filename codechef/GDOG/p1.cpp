#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N,K;
        int tmp;
        cin >> N >> K ;
        int maxCoin = INT_MIN;
        for(int i = 1; i <= K; i++)
        {
            tmp = N%i;
            if(maxCoin < tmp)
                maxCoin = tmp; 
        }
        cout << maxCoin << endl;
    }   
    
    return 0;
}
