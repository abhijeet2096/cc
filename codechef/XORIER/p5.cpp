#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int i=0; i<200; i++)
    {
        for(int j=i+1; j<200; j++)
        {
            if((i^j) == 2)
                cout << i << " " << j << endl;
        }
    }
    return 0;
}
