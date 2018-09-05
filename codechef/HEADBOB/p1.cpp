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
        char tmp;
        vector<int> a(3,0);
        for(int i=0;i<n;i++)
        {
            cin >> tmp;
            if(tmp == 'Y')
                a[0]++;
            else if(tmp == 'N')
                a[1]++;    
            else if(tmp == 'I')
                a[2]++;
        }
        if(a[0] > 0 && a[2] == 0)
            cout << "NOT INDIAN" << endl;
        else if(a[2] > 0 && a[0] == 0)
            cout <<  "INDIAN" << endl;
        else
            cout <<  "NOT SURE" << endl;
    }   
    
    return 0;
}
