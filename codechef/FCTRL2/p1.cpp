#include <iostream>
#include <vector>

using namespace std;

vector<int> fac(int n);
void printfunc(vector<int> a);
vector<int> mul(int n, vector<int> a);


int main()
{
    int T;
    cin >> T;
    int n;
    
    while(T--)
    {
        cin >> n;
        printfunc(fac(n));
    }
    return 0;
}

vector<int> fac(int n)
{
    vector<int> a;
    a.push_back(1);    
    
    for(int i = 2; i <= n; i++)
    {
        a = mul(i,a);
    }
    
    return a;
}

vector<int> mul(int n, vector<int> a)
{
    int pr;
    int t = 0;
    
    for(auto i = a.begin(); i != a.end(); i++ )
    {
            pr = n*(*i) + t;
            *i = pr%10;
            t  = pr/10; 
    }
    
    if(t > 0)
    {
        while(t != 0)
        {
            a.push_back(t%10);
            t = t/10;
        }
    }
    
    return a;
}

void printfunc(vector<int> a)
{
    for(auto i = a.rbegin(); i != a.rend(); i++ )
        cout << *i;
    cout << endl;
}
