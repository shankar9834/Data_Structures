#include<bits/stdc++.h>
#include "Node.h"

using namespace std;


void inorder(Node* root)
{
    if(!root) return ;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);

}

void inorder_non_recursive(Node *root)
{
    stack<Node*>st;

    if(!root)
    {
        cout<<"tree is empty\n";
    }

    while(1)
    {
        while(root)
        {
            st.push(root);
            root=root->left;
        }

        if(st.empty())  break;

        root=st.top();
        st.pop();

        cout<<root->val;

        root=root->right;

    }
}



int main()
{
      Node *root=new Node(-5);
     root->left=new Node(-2);
     root->right=new Node(5);
     root->left->left=new Node(7);
     root->left->right=new Node(-10);
     root->right->left=new Node(-1);
     root->right->right=new Node(11);

     cout<<"Inorder traversal\n";
    // inorder(root);
    inorder_non_recursive(root);
     cout<<"\n";

     

}