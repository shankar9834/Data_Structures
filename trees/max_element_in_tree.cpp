#include<bits/stdc++.h>
using namespace std;


class Node{
  //  private:
   public:
    int val;
    Node *left;
    Node *right;

//    public:
    Node(int v)
    {
        this->val=v;
        left=NULL;
        right=NULL;

    }
};

int max_node(Node* root)
{
    int root_val,left_val,right_val,max=INT_MIN;

    if(!root) return max;

    root_val=root->val;
    left_val=max_node(root->left);
    right_val=max_node(root->right);

    if(left_val>right_val)
    {
        max=left_val;
    }
    else max=right_val;

    if(root_val>max)
    {
        max=root_val;
    }
     
     return max;
    
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

     cout<<"maximum node in tree is "<<max_node(root)<<endl;
}