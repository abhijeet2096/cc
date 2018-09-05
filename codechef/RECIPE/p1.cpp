#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Function to find gcd of array of
// numbers
int findGCD(vector<int> arr)
{
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++)
        result = gcd(arr[i], result);
 
    return result;
}

int main()
{
    int T;
    cin >> T;
    int b;
    while(T--)
    {
        cin >> b;
        vector<int> a(b,0);
        
        for(int i=0; i< a.size(); i++)
            cin >> a[i];
        
        int c = findGCD(a);
        
        for(int i=0; i< a.size(); i++)
            a[i] /= c;
        
        for(int i=0; i< a.size(); i++)
            cout << a[i] << " ";
        cout << endl;
        
    }   
    return 0;
}

