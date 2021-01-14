#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		if(n==1) cout<<9<<"\n";
		else if(n==2) cout<<98<<"\n";
		else if (n==3) cout<<989<<"\n";
		else{
			cout<<989;
			n-=3;
			for(int i=0;i<n;i++){
				if(i%10==0){
					cout<<0;
				}
				else{
					cout<<i%10;
				}
			}
			cout<<"\n";
		}
	}
	return 0;
}