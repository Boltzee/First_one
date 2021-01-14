#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n,m;cin>>n>>m;
		int k[n];
		for(int i=0;i<n;i++) {
			cin>>k[i];
		}
		int cost[m];
		for(int i=0;i<m;i++){
			cin>>cost[i];
		}
		int visited[m]={false};
		sort(k,k+n);
		int final_ans=0;int h=0;
		for(int i=n-1;i>=0;i--){
			if(cost[k[i]-1]>cost[h]){
				final_ans+=cost[h];
				visited[h]=true;
				h++;
			}
			else {
				final_ans+= cost[k[i]-1];
			}
		}
		cout<<final_ans<<"\n";
	}
	return 0;
}