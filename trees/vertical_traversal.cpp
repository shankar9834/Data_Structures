     #include<bits/stdc++.h>
     using namespace std;
             class node
      {
             public:
              node *left,*right;
              int data;
              node(int data)
           {
               this->data=data;
              right=left=NULL;
          }

     };
           void inorder(node *root)
          {   if(root==NULL) return;
              inorder(root->left);
              cout<<root->data<<" ";
              inorder(root->right);
          }
      void verticalOrder(node *root,int hd,map<int,vector<int>> &m)
         {
             if(root==NULL) return;
             m[hd].push_back(root->data);
             verticalOrder(root->left,hd-1,m);
             verticalOrder(root->right,hd+1,m);
         }
               int main()
       {
              node *root=new node(10);
              root->left=new node(7);
              root->right=new node(4);
              root->left->left=new node(3);
              root->left->right=new node(11);
              root->right->left=new node(14);
              root->right->right=new node(6);
              //inorder(root);
                     int hd=0;
                 map<int,vector<int>>m;
                 verticalOrder(root,hd,m);
                map<int,vector<int>>::iterator it;
                for(auto it=m.begin();it!=m.end();it++)
                {
                    for(int i=0;i<(it->second).size();i++)
                    {
                         cout<<(it->second)[i]<<" ";
                    }
                    cout<<endl;
                }

     
       }