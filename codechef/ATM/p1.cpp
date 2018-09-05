#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float Bal;
    int amt;
    float tf = 0.50;
    
    cin >> amt >> Bal;
    
    if(amt+tf > Bal || amt%5 != 0)
        cout << setprecision(2) << fixed << float(Bal) << "\n";
    else 
        cout << setprecision(2) << fixed << float(Bal - amt - tf) << "\n";
    return 0;
}
