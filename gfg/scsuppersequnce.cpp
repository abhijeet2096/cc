#include <bits/stdc++.h>

using namespace std;

int getMeMyAns(unordered_map<string,int> &map,string s1,string s2)
{
    string k1 = s1 + "_" + s2;
    string k2 = s2 + "_" + s1;

    if(map.find(k1) != map.end())
        return map[k1];
    if(map.find(k2) != map.end())
        return map[k2];

    if(s1.length() == 0)
        map[k1] = map[k2] = s2.length();
    else if(s2.length() == 0)
        map[k1] = map[k2] = s1.length();
    else if(s1[s1.length()-1] == s2[s2.length()-1])
        map[k1] = map[k2] = 1 + getMeMyAns(map,s1.substr(0,s1.length()-1),s2.substr(0,s2.length()-1));
    else
        map[k1] = map[k2] = 1 + min(getMeMyAns(map,s1.substr(0,s1.length()-1),s2),getMeMyAns(map,s1,s2.substr(0,s2.length()-1)));
    
    return map[k1];
}

void printMatrix(vector<vector<int>> dp)
{

    cout << "Start" << endl;
    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[i].size();j++)
        {  
            if(dp[i][j] != INT_MAX)
                cout << dp[i][j] << " ";
            else
                cout << "M ";
        }
        cout << endl;
    }

    cout << "End" << endl;
}

int getMyAnsBitch(string s1,string s2)
{
    
    if(s1.length() == 0) return s2.length();
    else if(s2.length() == 0) return s1.length();

    vector<vector<int>> dp(s1.length()+1,vector<int>(s2.length()+1,INT_MAX));
    //cout << "S1.lenght : " << s1.length() <<  " S2.lenght : " << s2.length() << " dp.size : " << dp.size() << endl;
    dp[1][1] = (s1[0] == s2[0]) ? 1:2;
    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[i].size();j++)
        {       
            if(i==1 && j==1)
                continue;
            if(s1[i-1] == s2[j-1] && i>1 && j>1)
            {
                dp[i][j] = 1 + dp[i-1][j-1];
               // cout << "E" << endl;
            }
            else if(s1[i-1] == s2[j-1] && (i==1 || j==1))
            {
                if(i==1) dp[i][j] = j;
                else if(j==1) dp[i][j] = i;
            }
            else if(s1[i-1] != s2[j-1]) 
            {
                dp[i][j] = 1 + min(dp[i][j-1],dp[i-1][j]);
             //   cout << "NE" << endl;
            }
           // printMatrix(dp); 
        }
    }

    return dp[s1.length()][s2.length()];
}


int main()
{
    int T;cin >> T;
    unordered_map<string,int> map;
    while(T--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        //cout << getMeMyAns(map,s1,s2) << endl;
        cout <<  getMyAnsBitch(s1,s2) << endl;
    }
    return 0;
}