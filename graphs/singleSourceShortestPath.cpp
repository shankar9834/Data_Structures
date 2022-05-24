#include<iostream>
#include<vector>
using namespace std;
const int N=100;
vector<int>adj_ls[N];
int vis[N]={0};
int dis[N]={0};

void dfs(int n,int d)
{
    vis[n]=1;
    dis[n]=d;
    cout<<n<<" ";
    for(auto k:adj_ls[n])
    {
        if(vis[k]==0)
        {
             dfs(k,dis[n]+1);
        }
    }

 return ;
}
int main()
{
    int nodes,edges;
    cout<<"Enter nodes and edges\n";
    cin>>nodes>>edges;
    while(edges--)
    {cout<<"enter the nodes having edge\n";
        int n1,n2;
        cin>>n1>>n2;
        adj_ls[n1].push_back(n2);
        adj_ls[n2].push_back(n1);
    }
 for(int i=1;i<=nodes;i++)
 {
     if(vis[i]==0)
     dfs(i,0);
 }
for(int i=1;i<=6;i++)
{
    cout<<"dist "<<i<<" is "<<dis[i]<<endl;
}

}