#include <bits/stdc++.h>

using namespace std;

int calInSide(int a);

int main()
{
    int T;
    cin >> T;

    int ctr;
    int tmp;
    while(T--)
    {
        ctr =0;
        cin >> tmp;
        while(tmp != 0)
        {
            tmp = calInSide(tmp);
            ctr += tmp;
            tmp  = (tmp/2)*2;
        }
        cout << ctr << endl;
    }
    return 0;
}

int calInSide(int a)
{
    if(a > 3)
        return 2*(int(((a-2)/2))) - 1;
    else
        return 0;
    
}
