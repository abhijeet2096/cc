#include<bits/stdc++.h>

using namespace std;

long long int sum(int n);
long long int sum(int d,int n);


int main()
{
    int T;
    cin >> T;
    while(T--)
    {
       int n,d;
       cin >> d >> n;
       cout << sum(d,n) << endl;
    }   
    
    return 0;
}

long long int sum(int n)
{
    return n*(n+1)/2;
}

long long int sum(int d, int n)
{
    long long int tmp = sum(n);
    for(int i=0; i <d-1; i++)
    {
        tmp = sum(tmp);
    }
    return tmp;
}
