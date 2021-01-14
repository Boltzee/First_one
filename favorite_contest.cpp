#include<bits/stdc++.h>
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n,k;cin>>n>>k;
	k++;
	for(int i=k;i>0;i--){
		cout<<i<<" ";
	}
	k++;
	for(int i=k;i<=n;i++){
		cout<<i<<" ";
	}
	return 0;
}