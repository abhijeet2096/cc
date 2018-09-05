#include<bits/stdc++.h>

using namespace std;

void checkLRdel(vector<int> a, int index);

int main()
{
    int T;
    cin >> T;
    int n;
    int tmp;
    while(T--)
    {
        cin >> n;
        long long int minele = INT_MAX;
        int minInd = 0;
        for(int i=0; i<n;i++)
        {
            cin >> tmp;
            if(minele > tmp)
            {
                minele = tmp;
                minInd = i;
            }
        }
        cout << minele*(n-1) << endl;     
    }   
    
    return 0;
}
