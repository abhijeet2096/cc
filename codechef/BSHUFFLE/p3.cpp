#include <bits/stdc++.h>

using namespace std;

void swap_(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

void print(vector<int> &s){
    for(int i = 0; i < s.size(); i++){
        cout << s[i] << " ";
    }
}

void recur(unordered_map<string, int> &mp, vector<int> s, int ind){
    if(ind == s.size()){
        string res = "";
        for(int i = 0; i < s.size(); i++){
            res += (char)(s[i]+'0');
            res += '_';
        }
        mp[res]++;
        return;
    }
    for(int i = 0; i < s.size(); i++){
        swap_(s[i], s[ind]);
        recur(mp, s, ind+1);
        swap_(s[i], s[ind]);
    }
}

int main(){
    int n;
    vector<int> s;
    cin >> n;
    for(int i = 1; i <= n; i++){
        s.push_back(i);
    }
    unordered_map<string, int> mp;
    recur(mp, s, 0);
    int min = INT_MAX;
    int max = INT_MIN;
    string sMin;
    string sMax;
    for(auto it: mp){
        //cout << it.first << " -- " << it.second << endl;
        if(min > it.second)
        {
            sMin = it.first;
            min = it.second;
        }
        
        if(max < it.second)
        {
            sMax = it.first;
            max = it.second;
        }
    }
    
    cout << "mins :: " << endl;
    for(auto it: mp)
    {
    
            if(it.second == min)
                cout << it.first << endl;
    }
    cout << "MAX :: " << endl;
    for(auto it: mp)
    {
    
            if(it.second == max)
                cout << it.first << endl;
    }
    

    //cout << sMax << endl;
    //cout << sMin << endl;
    return 0;
}
