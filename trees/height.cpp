#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
node *left;
node *right;
int data;
int height(node *root)
{
    if(root==NULL ) return 0;
    int x=0,y=0;
    x=height(root->left);
    y=height(root->right);
    if(x>y) return x+1;
    else return y+1;
}
node(int val)
{ data=val;
    lefy=right=NULL;
}
};

int main()
{
 node *root=new node(1);
 root->left=new node(2);
 root->left=new node(3);
 root->left->right=new node(4);
 root->left->right->left=new node(5);
 root->left->right->right=new node(6);

int h=height(root);
cout<<h<<endl;
}