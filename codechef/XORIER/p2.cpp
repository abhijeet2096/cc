#include <bits/stdc++.h>

using namespace std;

bool checkMyProp(int N);
bool isPrime(int n);

int main()
{
    int T;
    cin >> T;
    int N,cnt;
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
                if(checkMyProp(a[i]^a[j]))
                    cnt++;
            }
        }
        cout << cnt << endl;
        
    }
    return 0;
}

bool checkMyProp(int N)
{
    bool flag = false;
    int i=2,x,y;
    while(1)
    {
        x = i;
        y = N - x;
        if(x > N/2)
            return false;
        if(!isPrime(x))
        {   
            i++;
            continue;
        }
        if(x%2 == 0 && y%2 == 0)
        {
            if(isPrime(y))
            { 
                return true;
            }
                
        }
        else if(x%2 == 1 && y%2 == 1)
        {
            if(isPrime(y))
            { 
                return true;
            }
        }
        i++;
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
