#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int N,X,S;
    int a,b;
    int tmp;
    while(T--)
    {
        cin >> N >> X >> S;
        tmp = X;
        for(int i=0;i<S;i++)
        {
            cin >> a >> b;
            if(a == tmp)
                tmp = b;
            else if(b == tmp)
                tmp = a;
        }
        cout << tmp << endl;
    }
    return 0;
}
