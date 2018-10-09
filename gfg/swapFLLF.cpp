#include <bits/stdc++.h>

using namespace std;


void swap(char &a,char &b);

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string a,b;
        cin >> a >> b;

        swap(a[0],b[b.length()-1]);
        swap(b[0],a[a.length()-1]);
        
        cout << a  << " " << b << endl;
    }
    return 0;
}

void swap(char &a,char &b)
{
    char tmp;
    tmp = a;
    a = b;
    b = tmp;
}