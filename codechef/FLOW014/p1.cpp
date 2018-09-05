#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    bool c1,c2,c3;
    float hd,cc,ts;
    while(T--)
    {
        c1 = c2 = c3 = false;
        cin >> hd >> cc >> ts; 
        if(hd > 50)
            c1 = true;
        if(cc < 0.7)
            c2 = true;
        if(ts > 5600)
            c3 = true;
        
        if(c1 && c2 && c3)
            cout << "10" <<  endl;
        else if(c1 && c2)
            cout << "9" <<  endl;
        else if(c2 && c3)
            cout << "8" <<  endl;
        else if(c1 && c3)
            cout << "7" <<  endl;
        else if(c1 || c2 || c3)
            cout << "6" <<  endl;
        else if(!c1 && !c2 && !c3)
            cout << "5" <<  endl;
            
    }   
    
    return 0;
}
