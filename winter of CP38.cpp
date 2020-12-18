#include <bits/stdc++.h>
using namespace std;

vector <int> a[3005];
int depth[3005];
int dfs(int index , int p , int deep){
    depth[index]=deep;
    for(int i=0 ; i<a[index].size() ; i++){
        int next=a[index][i];
        if(next==p)   continue;
        if(depth[next]) return depth[next];
        int k= dfs(next,index,deep+1);
        if(k) return k;
    }
    return 0;
}
int main() 
{
    int n,k;
    
    cin>>n;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
     for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++) depth[j]=0;
         cout<<dfs(i,-1,1)-1<<" ";
     }
    return 0;
}