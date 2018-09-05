#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int n;
        cin >> n;
        int tmp;
        int t1,t2;
        cin >> t1 >> t2;
        int m1,m2;
        m2 = max(t1,t2);
        m1 = min(t1,t2);
        
        for(int i=2; i<n ;i++)
        {
            cin >> tmp;
            if(m1 > tmp || m2 > tmp)
            {
                if(m1 > tmp)
                {
                    m2 = m1;
                    m1 = tmp;
                }
                else if(m2 > tmp) 
                {
                    m2 = tmp;
                }
                
            }
        }
        cout << m1 + m2 << endl;
    }
    
    return 0;
}
