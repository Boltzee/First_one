#include<bits/stdc++.h>
using namespace std;
#define num 200005
vector <pair<int,int> > vec[num];
int dp[num]={0};

int dfs(int index,int parent){
	for(auto x: vec[index]) if(x.first!=parent) {
		dfs(x.first,index);
		if(x.second==0) dp[index]++;
		dp[index]+=dp[x.first];
	}
}

int dfs2(int index,int parent, int count){
	for(auto x:vec[index]) if(x.first!=parent) {
		int remain= dp[index]-dp[x.first] + ((x.second)?1:-1);
        dfs2(x.first,index,count+remain);
	}
	dp[index]+= count;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n;cin>>n;
	for(int i=0;i<n-1;i++){
		int u,v;cin>>u>>v;
        vec[u].push_back(make_pair(v,1));
        vec[v].push_back(make_pair(u,0));
	}
    dfs(1,0);
    // for(int i=1;i<n+1;i++) cout<<dp[i]<<" ";cout<<endl;
    dfs2(1,0,0);
    // for(int i=1;i<n+1;i++) cout<<dp[i]<<" ";cout<<endl;
    int min= *min_element(dp+1,dp+n+1);
    cout<<min<<"\n";	
    for(int i=1;i<n+1;i++) if(dp[i]==min) {
    	cout<<i<<" ";
    }cout<<"\n";
}