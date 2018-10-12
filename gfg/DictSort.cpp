#include <bits/stdc++.h>

using namespace std;

string topologicalSortHelper(vector<int> G[], int k);
stack<int> topologicalSort(vector<int> G[], int k);
void topoRecurr(vector<int> G[],int k,set<int> &visited,stack<int> &sorted,int vertex);
string stackToString(stack<int> a);
void addEdges(vector<int> G[],int k,string A,string B);
void addEdge(vector<int> G[],int k,char A,char B);
int firstUnmatched(string A, string B);
void printGraphNow(vector<int> G[],int k);
void printSet(set<int> visited);

string topologicalSortHelper(vector<int> G[],int k)
{
    stack<int> a;
    a = topologicalSort(G,k);
    return stackToString(a);
}

stack<int> topologicalSort(vector<int> G[],int k)
{
    set<int> visited;
    stack<int> sorted;
    for(int i=0;i<k;i++)
    {
        if(visited.find(i) != visited.end())
            continue;
        topoRecurr(G,k,visited,sorted,i);
    }
    return sorted;
}

void topoRecurr(vector<int> G[],int k,set<int> &visited,stack<int> &sorted,int vertex)
{
    visited.insert(vertex); 
    //printSet(visited);
    for(int i=0;i<G[vertex].size();i++)
    {
        if(visited.find(G[vertex][i]) != visited.end())
            continue;
        topoRecurr(G,k,visited,sorted,G[vertex][i]);
    }
    //cout << vertex << endl;
    sorted.push(vertex);
}

void printSet(set<int> visited)
{
    cout << "***********Start****************" << endl;
    for(auto i=visited.begin();i!=visited.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << "************End****************" << endl;
}

void printGraphNow(vector<int> G[],int k)
{
    cout << "***********Start****************" << endl;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<G[i].size();j++)
        {
            cout << G[i][j] << " ";
        }
        cout << endl;
    }
    cout << "***********END****************" << endl;
}

string stackToString(stack<int> a)
{
    string b(a.size(),'a');
    int i=0;
    while(!a.empty())
    {
        b[i] = static_cast<char>(a.top() + 'a');i++;
        a.pop();
    }
    return b;
}
void addEdges(vector<int> G[],int k,string A,string B)
{
    int index=firstUnmatched(A,B); 
    if(index != -1)
    {
        //cout << "A : " << A << " B :" << B << " index :" << index << endl;
        //printGraphNow(G,k);
        addEdge(G,k,A[index],B[index]);
    }
}

bool edgeExist(vector<int> G[],int k,int m,int n)
{
    int flag = false;
    for(int i=0;i<G[m].size();i++)
    {
        if(G[m][i]==n)
        { flag = true;break;}
    }
    return flag;
}

void addEdge(vector<int> G[],int k,char A,char B)
{ 
    if(!edgeExist(G,k,static_cast<int>(A -'a'),static_cast<int>(B -'a')))
    {
        G[static_cast<int>(A -'a')].push_back(static_cast<int>(B-'a'));
        //cout << "Pushing" << static_cast<int>(A -'a') << " : " << static_cast<int>(B -'a') << endl;
    }
    //printGraphNow(G,k);
}

int firstUnmatched(string A, string B)
{
    int i;
    for(i=0; i< A.size(); i++)
    {
        if(A[i] != B[i])
            break;
    }
    if(i < A.size())
        return i;
    else
        return -1;
}

string printOrder(string dict[], int N, int k)
{
    int tmp;
    vector<int> G[k];
    for(int i=0; i<N;i++)
    {
        for(int j=i; j<N;j++)
        {
        addEdges(G,N,dict[i],dict[j]);   
        }
    }
   return topologicalSortHelper(G,k);
}

int main()
{
    string dict[] = {"caa", "aaa", "aab"};
    int k=3;
    int N=3;

    cout << printOrder(dict,N,k) << endl;

    return 0;
}