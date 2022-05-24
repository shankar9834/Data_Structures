#include<bits/stdc++.h>
using namespace std;
class node
{public:
    int data;
    node *lchild;
    node *rchild;
};
class tree
{public:
    node *root,*p,*t;int x;
    queue<node*>q;
  void create_tree();
  void preorder(node *p);
  void inorder(node *p);
  void postorder(node *p);


};
void tree::create_tree()
   {
       cout<<"Enter root node\n";
        cin>>x;
        root=new node;
        root->data=x;
        root->rchild=root->lchild=NULL;
          q.push(root);
          while(!q.empty()){
              p=q.front();
               q.pop();
        cout<<"Enter the left child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new node;
            t->data=x;
             t->rchild=NULL;
             t->lchild=NULL;
            p->lchild=t;
               q.push(t);
           
        }
        
        cout<<"Enter right child of "<<p->data<<endl;
            cin>>x;
            if(x!=-1)
            {
                t=new node;
                t->data=x;
                t->lchild=NULL;
                t->rchild=NULL;
                p->rchild=t;
                q.push(t);
            }
          }
   }
   void tree::preorder(node* p)
   {  if(p==NULL) return;
       cout<<p->data<<" ";
       preorder(p->lchild);
       preorder(p->rchild);
   }
   void tree::inorder(node *p)
   {
       if(p==NULL) return;
       inorder(p->lchild);
       cout<<p->data<<" ";
       inorder(p->rchild);

   }
   void tree::postorder(node *p)
   {
       if(p==NULL) return;
       postorder(p->lchild);
       postorder(p->rchild);
       cout<<p->data<<" "; 
   }


int main()
{
tree T;
T.create_tree();
//T.preorder(T.root);
//T.inorder(T.root);
T.postorder(T.root);
}