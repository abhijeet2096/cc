#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int N,M,X,Y;
    while(T--)
    {
        cin >> N >> M >> X >> Y;
        if(((N-1)%X == 0) && ((M-1)%Y == 0))
            cout << "Chefirnemo" << endl;
        else if(((N-2)%X == 0) && ((M-2)%Y == 0) && (N >= 2) && (M >= 2))
            cout << "Chefirnemo" << endl;
        else
            cout << "Pofik" << endl;
        
    }
    return 0;
}
