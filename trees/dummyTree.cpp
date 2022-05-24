#include<bits/stdc++.h>
#include "Node.h"

Node* Node::createDummyTree()
{
     Node *root=new Node(-5);
     root->left=new Node(-2);
     root->right=new Node(5);
     root->left->left=new Node(7);
     root->left->right=new Node(-10);
     root->right->left=new Node(-1);
     root->right->right=new Node(11);
   
   return root;
}
