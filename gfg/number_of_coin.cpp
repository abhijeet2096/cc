#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T; cin >> T;
    while(T--)
    {
        int V,N;
        cin >> V >> N;
        vector<int> c(N,0);
        vector<int> d(N,0);

        for(int i=0;i<N;i++)
        {
            cin >> c[i];
        }

        sort(c.rbegin(),c.rend());

        ans = 

        if()    
    
    }
    return 0;
}

giveMeMyMoney(int V,int N,vector<int> c)
{
    int tmp = V,tmp1;
    int i=0,sum=0;
    while(tmp!=0)
    {
        if(i >= N)
           break;
        tmp1 = tmp/c[i];
        d[i] = tmp1;
        sum += tmp1;
        tmp = tmp - tmp1*c[i];
        cout << "NOC " << tmp1 << " DENO " << c[i] << " LEFT " << tmp <<  endl;
        i++;
    }
    if(tmp == 0)
        return sum;
    else
        return -1;
}