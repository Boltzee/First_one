#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n],sor[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sor[i]=arr[i];
		}
		sort(sor,sor+n);
		int m=*min_element(sor,sor+n);
		bool instinct=false;
		for(int i=0;i<n;i++){
			if(arr[i]!=sor[i] && __gcd(arr[i],m)!=m){
				instinct=true;break;
			}
		}
		if(instinct){
			cout<<"NO\n";continue;
		}
		else{
			cout<<"YES\n";continue;
		}
	}
	return 0;
}
