// C++ program to count all subsets with
// given sum.
#include <bits/stdc++.h>
using namespace std;

// dp[i][j] is going to store true if sum j is
// possible with array elements from 0 to i.
bool** dp;

void display(const vector<int>& v)
{
	for (int i = 0; i < v.size(); ++i)
		printf("%d ", v[i]);
	printf("\n");
}

void findPath(int arr[],vector<vector<int>> dp,int n,int sum,vector<int> path){
    if(sum==0){
        display(path);
        return;
    }
    if(sum<0) return;
    if(dp[n][sum]){
        findPath(arr,dp,n-1,sum,path);
        path.push_back(arr[n-1]);
        findPath(arr,dp,n-1,sum-arr[n-1],path);
        path.pop_back();
    }
}

void PrintDPMatrix(const vector<vector<int>> &a)
{
    cout << "**Start**" << endl;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    cout << "**END**" << endl;
}

// Prints all subsets of arr[0..n-1] with sum 0.
void printAllSubsets(int arr[], int n, int sum)
{
    vector<vector<int>> dp(n+1,vector<int>(sum+1,0));
    
    for(int i=0;i<n+1;i++)
        dp[i][0]=1;
    for(int i=1;i<sum+1;i++)
        dp[0][i]=0;
    for(int i=1;i<n+1;i++)
        for(int j=0;j<sum+1;j++)
            if(j>=arr[i-1])
                dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
            else dp[i][j]=dp[i-1][j];
            
    vector<int> path;
    PrintDPMatrix(dp);
    //findPath(arr,dp,n,sum,path);
}

// Driver code
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 10;
	printAllSubsets(arr, n, sum);
	return 0;
}
