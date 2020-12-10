#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		long long int n;cin>>n;
		n= n/2+1;
		long long int ans;
		ans = (2*n*(2*n-1)*(2*n+1))/3 - (n*n)*4 + 2*n;
		cout<<ans<<"\n";
	}
	return 0;
}
