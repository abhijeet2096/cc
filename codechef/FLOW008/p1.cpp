#include <iostream>

using  namespace std;

int main()
{
    int T;
    cin >> T;
    
    int n;
    while(T--)
    {
        cin >> n;
        if(n<10)
            cout << "What an obedient servant you are!" << endl;
        else
            cout << "-1" << endl;
            
    }
    return 0;
}
