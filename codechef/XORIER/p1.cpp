#include <bits/stdc++.h>

#define MAXSIZE 100000

using namespace std;


bool checkMyProp(int N,vector<int> allPrime,vector<int> primeHash);
void fillAllPrime(vector<int> &a,vector<int> &b,int N);
bool isPrime(int n);

int main()
{
    int T;
    cin >> T;
    int N,cnt;
    vector<int> allPrime;
    vector<int> primeHash(MAXSIZE+1,-1);
    fillAllPrime(allPrime,primeHash,MAXSIZE);
    while(T--)
    {
        cin >> N;
        cnt = 0;
        vector<int> a(N,0);
        for(int i=0; i<N; i++)
            cin >> a[i];
        
        for(int i=0; i<N; i++)
        {
            for(int j=i+1; j<N; j++)
            {
                if(checkMyProp(a[i]^a[j],allPrime,primeHash))
                    cnt++;
            }
        }
        cout << cnt << endl;
        
    }
    return 0;
}

bool checkMyProp(int N,vector<int> allPrime,vector<int> primeHash)
{
    bool flag = false;
    int i=1,x,y;
    
    if(N%2 == 1)
        return false;
    if(N == 4)
        return true;
    while(1)
    {
        x = allPrime[i];
        y = N - x;
        if(x > N/2)
            return false;
        
        if(primeHash[y] == 1)
        { 
            return true;
        }
        i++;
    }
}

void fillAllPrime(vector<int> &a,vector<int> &b,int N)
{
    b[0] = b[1] = 0;
    int tmp;
    for(int i=2; i <= N; i++)
    {
        tmp = 2;
        if(b[i] == -1)
        {
            if(isPrime(i))
            {
                b[i] = 1;
                while(tmp*i <= N)
                {
                    b[tmp*i] = 0;
                    tmp = tmp+1;
                }
            }
    
        }
    }
    for(int i = 0; i<=N; i++)
    {
        if(b[i]==1)
            a.push_back(i);
    }
}

bool isPrime(int n)
{
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 

    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true;
    
}
