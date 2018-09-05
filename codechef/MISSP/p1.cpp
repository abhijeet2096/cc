#include<bits/stdc++.h>

using namespace std;

void checkLRdel(vector<int> a, int index);

int main()
{
    int T;
    cin >> T;
    int M,x,y,tmp,cnt,x1,x2;
    while(T--)
    {
        cnt = 0;
        cin >> M >> x >> y;
        vector<int> b(100,0);
        for(int i=0;i<M;i++)
        {
            cin >> tmp;
            x1 = ((tmp - x*y) <= 0) ? 0 : tmp - x*y - 1;
            x2 = (100 - (tmp + x*y) <= 0) ? 99 : (tmp + x*y) - 1;
           // cout << "x1 : " << x1 << " x2 :" << x2 << endl;
            for(int j = x1; j<=x2; j++ )
                b[j] = 1;
        }
        
        for(int i=0;i<100;i++)
        {
            if(b[i]==0)
                cnt++;
        }
        cout << cnt << endl;
        
    }   
    
    return 0;
}
