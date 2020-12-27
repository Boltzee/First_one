#include<bits/stdc++.h>
using namespace std;
#define int long long int 

signed main(){
	int n,m;cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	// cout<<"example is "<<__gcd(0,19)<<" \n";
	for(int i=0;i<m;i++){
	    int set=0,k;
	    for(int j=1;j<n;j++){
            set= __gcd(set,a[j]-a[0]);
	    }
	    k= __gcd(set,a[0]+b[i]);
	    cout<<abs(k)<<" ";
	}
	cout<<"\n";
	return 0;
}