#include<bits/stdc++.h>
// #include "Node.h"  if i used this then i have to compile every time manually
#include "dummyTree.cpp"  //this makes life easier

using namespace std;
void inorder(Node* root)
{
    if(!root) return ;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);

}
int main()
{
    Node *root=new Node();
    root=root->createDummyTree();
   cout<<"inorder traversal\n";
   inorder(root);

}
