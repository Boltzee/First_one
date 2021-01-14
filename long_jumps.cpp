#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector <int> dp;
		for(int i=n-1;i>=0;i--){
			if(i+a[i]<n){
				// cout<<i+a[i]<<" the value of index\n";
				dp.push_back(a[i]+a[i+a[i]]);
				a[i]+= a[i+a[i]];
			}
			else{
				dp.push_back(a[i]);
			}
		}
		// for(auto x:dp) cout<<x<<" ";cout<<endl;
		cout<<*max_element(dp.begin(), dp.end())<<"\n";
	}
	return 0;
}