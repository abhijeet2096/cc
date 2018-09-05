#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    char b;
    map <char,string> a;
    a.insert(pair<char,string> ('b',"BattleShip"));
    a.insert(pair<char,string> ('c',"Cruiser"));
    a.insert(pair<char,string> ('d',"Destroyer"));
    a.insert(pair<char,string> ('f',"Frigate"));
    while(T--)
    {
        cin >> b;
        cout << a[tolower(b)] << endl;
        
    }
    return 0;
}
