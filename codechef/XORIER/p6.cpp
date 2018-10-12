#include <bits/stdc++.h>

using namespace std;

unsigned long long int nc2(unsigned long long int n);

unsigned long long int a[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    int N,tmp;
    unsigned long long int total,cnt;
    while(T--)
    {
        cin >> N;
        cnt =0;
        int e,o;
        e=o=total=0;
        memset(a,0,sizeof(a));
        for(int i=0; i<N; i++)
        {
            cin >> tmp;
            a[tmp]++;
            if(tmp%2 == 0)
                e++;
            else if(tmp%2 == 1)
                o++;
        }
        int i=0,j=0,k=1;
        while(i<=1000000)
        {
            if(k+2 <= 1000000)
            {
                cnt += a[j]*a[j+2];
                j+=4;
                cnt += a[k]*a[k+2];
                k+=4;
            }
            cnt += nc2(a[i]);
        
            i++;
        }
        total = nc2(o) + nc2(e) - cnt;
        cout << total << endl;
    }
    return 0;
}

unsigned long long int nc2(unsigned long long int n)
{
    unsigned long long int tmp;
    tmp = (n*(n-1))/2;
    if(n>1)
        return tmp;
    else
        return 0;
}


