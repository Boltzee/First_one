#include<iostream>
#define int long long int
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int a,b,c;
		int ans1=0,ans2=0;
		cin>>a>>b>>c;
		if(a<c){
			ans1=1;
			int value= a*b;
			if(value>c){
				ans2=b;
			}
			else if(value==c){
				value= value+ a;
				if(value>2*c){
					ans2=b+1;
				}
				else{
					ans2=-1;
				}
			}
			else{
				ans2=-1;
			}
			cout<<ans1<<" "<<ans2<<"\n";
		}
		else{
			ans2=2;	
			ans1=-1;
			cout<<ans1<<" "<<ans2<<"\n";
		}
	}
	return 0;
}
