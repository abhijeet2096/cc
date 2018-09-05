#include <iostream>
#include <vector>

using namespace std;

int maxSumPath(vector< vector<int>> a);

int main()
{
    int a;
    cin >> a;
    bool flag;
    while(a != 0)
    {
        vector<int> b(a,0);
        flag = true;
        for(int i=0; i< a; i++)
            cin >> b[i];
        for(int i=0; i < b.size(); i++)
        {
            if(b[b[i]-1] != i+1)
                flag = false;
        }
        
        if(flag == true)
            cout << "ambiguous" << endl ;
        else
            cout << "not ambiguous" << endl;
        cin >> a;
        
    }
    return 0;
}


