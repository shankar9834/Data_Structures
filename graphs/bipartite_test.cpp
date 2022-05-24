#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
vector<int>adj_ls[N];
int vis[N];
int col[N];

bool dfs(int n,int c)
{
   vis[n]=1;
   col[n]=c;
  for(auto k : adj_ls[n])
  {
      if(vis[k]==0)
      {
          if(dfs(k,c^1)==false) return false;
      }
      else{
          if(col[k]==col[n])
          {
              return false;
          }
      }
  }
  return true;
}
int main()
{
int nodes,edges;
cin>>nodes>>edges;
while(edges--)
{
    int n1,n2;
    cin>>n1>>n2;
    adj_ls[n1].push_back(n2);
    adj_ls[n2].push_back(n1);
}bool ans=false;
for(int i=1;i<=nodes;i++)
{
    if(vis[i]==0){
  ans= dfs(i,0);
    }
  
}
cout<<"#ans"<<" "<<ans<<endl;
}


