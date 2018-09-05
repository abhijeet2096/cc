#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, K, ctr=0;
    cin >> N >> K;
    int in[N];
    for(int i=0 ; i < N ; i++)
    {
        cin >> in[i];
    }
    for(int j=0 ; j < N ; j++)
    {
        if(in[j]%K == 0)
            ctr++;
    }
    cout << ctr << "\n"; 
    return 0;
}
