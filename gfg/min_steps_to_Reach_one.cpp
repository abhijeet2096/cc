#include<bits/stdc++.h>

using namespace std;

int myDpFunc(vector<int> &a,int n);
int myDpFunc2(int n);

int main()
{
    int T;cin >>T;
    while(T--)
    {
        int n;
        cin >> n;
       // vector<int> a(n+1,-1);
       // cout << myDpFunc(a,n) << endl;
       cout << myDpFunc2(n) << endl;
    }
}

int myDpFunc(vector<int> &a,int n)
{
    if(n==1) return 0;
    if(a[n]!=-1) return a[n];
    
    int s1,s2,s3;
    s1 = myDpFunc(a,n-1);
    s2 = (n%2==0) ? myDpFunc(a,n/2) : INT_MAX;
    s3 = (n%3==0) ? myDpFunc(a,n/3) : INT_MAX; 
    a[n] = 1 + min(s1,min(s2,s3));
    cout << "a[" << n << "]" << " = " << a[n] << " " << endl;
    return a[n];
}

int myDpFunc2(int n)
{
    int a[n+1];
    a[0] = -1;
    a[1] = 0;
    int tmp;
    for(int i=2;i<=n;i++)
    {
        tmp = a[i-1];
        if(i%2==0) tmp = min(tmp,a[i/2]);
        if(i%3==0) tmp = min(tmp,a[i/3]);
        a[i] = 1+ tmp;
    }
    for(int i=1;i<=n;i++)
        cout << "a[" << i << "]" << " = " << a[i] << " " << endl;
    return a[n];
}