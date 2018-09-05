#include <bits/stdc++.h>

using namespace std;

float eucDist(pair<int,int> x,pair<int,int> y);

int main()
{
    int T;
    cin >> T;
    
    vector<pair<int,int>> a;
    vector<float> b;
    int x,y;
    float R;
    while(T--)
    {
        cin >> R;
        for(int i=0; i<3; i++)
        {
            pair <int,int> p;
            cin >> x >> y;
            p.first = x;
            p.second = y;
            a.push_back(p);
        }
        for(int i=0; i<2; i++)
        {
            for(int j=i+1; i!=3-1 &j <3; j++)
            {   
                b.push_back(eucDist(a[i],a[j]));
            }
        }
        int ctr = 0;
        for(int i=0; i<b.size(); i++)
        {
            if(b[i] <= R)
            {
                ctr++;
            }
        }
        if(ctr >=2)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        b.clear();
        a.clear();
    }
    return 0;
}

float eucDist(pair<int,int> x,pair<int,int> y)
{
    return sqrt(pow(x.first - y.first,2)+pow(x.second - y.second,2));
}

