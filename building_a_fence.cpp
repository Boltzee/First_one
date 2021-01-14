#include<bits/stdc++.h>
using namespace std;

#define int long long int 

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n,k;cin>>n>>k;
		int heights[n];
		for(int i=0;i<n;i++){
			cin>>heights[i];
		}
		int mi=heights[0],ma=heights[0];
		for(int i=1;i<n;i++){
			mi-=(k-1);
			ma+= (k-1);
			ma = min(ma,heights[i]+k-1);
			mi= max(mi, heights[i]);
			if(mi>ma){
				cout<<"NO\n";
 				goto kiran;
			}
		}
		if(mi==heights[n-1]){
			cout<<"YES\n";
		}
		else {
			cout<<"NO\n";
		}
		kiran:;
	}
	return 0;
}