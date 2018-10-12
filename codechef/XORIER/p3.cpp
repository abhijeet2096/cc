#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    int N,cnt;
    int x,tmp;
    while(T--)
    {
        cin >> N;
        cnt = 0;
        vector<int> o,e;
        for(int i=0; i<N; i++)
        {
            cin >> tmp;
            if(tmp%2 == 0)
                e.push_back(tmp);
            else
                o.push_back(tmp);
        }
        for(int i=0; i<o.size(); i++)
        {
            for(int j=i+1; j<o.size(); j++)
            {
                x = (o[i]^o[j]);
                if(x > 2)
                    cnt++;
            }
        }
        for(int i=0; i<e.size(); i++)
        {
            for(int j=i+1; j<e.size(); j++)
            {
                x = (e[i]^e[j]);
                if(x > 2)
                    cnt++;
            }
        }
        cout << cnt << endl;
        
    }
    return 0;
}



