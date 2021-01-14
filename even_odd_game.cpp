#include<bits/stdc++.h>
using namespace std;

#define int long long int 

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T; cin>>T;
	while(T--){
		int n;cin>>n;
		int a[n];
		int odd=0,even=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]&1) odd+= a[i];
		}
		int sum= -1 * odd;
		sort(a,a+n);
		for(int i= n-1; i>= 0 ;i-=2){
			sum+= a[i];
		}
		if(sum<0){
			cout<<"Bob\n";continue;
		}
		else if(sum>0){
			cout<<"Alice\n";continue;
		}
		else{
			cout<<"Tie\n";continue;
		}
	}
}