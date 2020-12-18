#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define stop cout<<"\n";return 0;
#define int long long int
int32_t main(){
	fast;
	int a,b;cin>>a>>b;
	int ans=0;
//	int i=0;
	while(a!=0){
		int temp= a+b;
		a= max(a,b); b= temp-a;
//		cout<<a<<" "<<b;cout<<"\n";
		ans+= a/b;
		a = a- (a/b)*b;//i++;
//		cout<<"The value of a after the operation is "<<a<<"\n";
	}
	cout<<ans;stop;
}
