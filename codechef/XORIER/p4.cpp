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
        sort(e.begin(),e.end());
        sort(o.begin(),o.end());
        int m1 = 0,m2=0,n1=0,n2=0;
        for(int i=0; i<o.size()-1; i++)
        {
            cout << o[i+1] << " " << o[i] << endl;
            if(o[i+1] - o[i]  == 2 && (o[i]%4 == 1))
            {
                cout << "cnted alt" << endl;
                m1++;
            }
            if(o[i+1] - o[i]  == 0)
            {
                cout << "cnted same" << endl;
                m2++;
            }
        }
        for(int i=0; i<e.size()-1; i++)
        {
            cout << e[i] << " " << e[i+1] << endl;
            if(e[i+1] - e[i]  == 2 && (e[i]%4 == 0))
            {
                cout << "cnted alt" << endl;
                n1++;
            }
            if(e[i+1] - e[i]  == 0)
            { 
                cout << "cnted same" << endl;
                n2++;
            }
        }
        cnt = ((o.size())*(o.size()-1))/2 + ((e.size())*(e.size()-1))/2 - n1 - m1;
        cout << cnt << endl;
        cout << "m1 :" << m1 << "m2 :" << m2 << "n1 :" << n1 << "n2 :" << n2 << endl;
    }
    return 0;
}



