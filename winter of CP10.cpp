#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		int b[n];
		for (int i=0;i<n;i++) cin>>b[i];
		sort(b,b+n);
		for(auto i=1;i<n;i++){
			if(b[i]==b[i-1]){
				cout<<"YES\n";goto kiran;
			}
		}
		cout<<"NO\n";
		kiran:;
	}
	return 0;
}
