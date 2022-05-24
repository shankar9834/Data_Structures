#include<bits/stdc++.h>
#include "Node.h"
using namespace std;

int max_el(Node * root)
{
    int left,right,max_val=INT_MIN,root_val;
    if(!root) return max_val;

    root_val=root->val;
    left=max_el(root->left);
    right=max_el(root->right);

    if(left>right)
    {
        max_val=left;
    }
    else max_val=right;

    if(root_val>max_val)
    {
        max_val=root_val;
    }
    return max_val;



}

int main()
{
    Node *n1=new Node(10);
    n1->left=new Node(14);
    n1->right=new Node(5);
     cout<<"Max value is "<<max_el(n1)<<endl;
}
