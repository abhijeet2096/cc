#include <bits/stdc++.h>

using namespace std;


struct Node
{
    int data;
    struct Node* next=NULL;
};

int length(Node* node);
Node* KthPrevNode(Node* node,int k);
void killThatNode(Node* PrevNode);
void PrintMyList(Node* node);
int josephus(int n,int k);

int main()
{
    int k=2;//ANS 3
    int n=5;
    //Create A Circular Linked List
    Node *Head;
    Node * tmp, *tmp2;
    bool flag =  true;
    for(int i=0;i<n;i++)
    {
        if(flag)
        {
            tmp = new Node;
            tmp->data = i+1;
            Head = tmp;
            flag = false;
            continue;
        }
        tmp2 = new Node;
        tmp2->data = i+1;
        tmp->next = tmp2;
        tmp = tmp2;
    }
    tmp->next = Head; // Wrap Up

    cout << josephus(5,2) << endl;
    exit(0);
    Node* tmpNode = Head;
    
    // Start Code;
    while(length(tmpNode) != 1)
    {
        PrintMyList(Head);
        tmpNode = KthPrevNode(tmpNode,k);
        cout << "Node To Be Deleted " << tmpNode->next->data << endl;
        if(tmpNode->next == Head)
            Head = tmpNode->next->next;
        killThatNode(tmpNode);
        tmpNode = tmpNode->next;
    }

    cout << tmpNode->data << endl;

    return 0;
}

int josephus(int n,int k)
{
    if(n==1)
        return 1;
    else
    {
        return (josephus(n-1,k) + k -1)%n + 1;
    }
    
}

int length(Node* node)
{
    int k=1;
    Node* OriginalHead;
    OriginalHead = node;
    node = node->next;
    while(node != OriginalHead)
    {
        k++;
        node = node->next;
    }
    return k;
}
Node* KthPrevNode(Node* node,int k)
{
    k-=2;
    if(k>0)
    while(k--)
    {
        node = node->next;
    }
    return node;
}
void killThatNode(Node* PrevNode)
{
    Node* NodeToBeKilled = PrevNode->next;
    PrevNode->next = NodeToBeKilled->next;
    delete(NodeToBeKilled);
}

void PrintMyList(Node* node)
{
    cout << "**Start**" << endl;
    Node* OriginalHead = node;
    cout << OriginalHead->data << " ";
    node=node->next;
    while(node != OriginalHead)
    {
        cout << node->data << " ";
        node=node->next;
    }
    cout << endl;
    cout << "**End**" << endl;
}
