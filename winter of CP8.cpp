#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n,m;cin>>n>>m;
		int a[n],b[m];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++) cin>>b[i];
		bool visited[1005]={false};
		for (int i=0;i<n;i++){
			visited[a[i]]=true;
		}
		bool ins=false;
		for(int i=0;i<m;i++){
			if(visited[b[i]]){
				cout<<"YES\n";
				cout<<"1 "<<b[i]<<"\n";ins=true;
				break;
			}
		}
		if(!ins){
			cout<<"NO\n";
		}
	}
	return 0;
}
