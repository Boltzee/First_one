#include<iostream>
using namespace std;
#define int long long int 
int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int a,b,n,m;cin>>a>>b>>n>>m;
		if(m>min(a,b)){
			cout<<"No\n";continue;
		}
		if(a+b<m+n){
			cout<<"No\n";continue;
		}
		cout<<"Yes\n";continue;
	}
	return 0;
}
