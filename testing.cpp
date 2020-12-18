#include<iostream>
using namespace std;
#define int long long int
int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
//	int T;cin>>T;
//	while(T--){
		int n;cin>>n;
		int a[n];
		int max_sum=0;
		int min=INT_MAX;
		bool pres=false;
		int max=-1*INT_MAX;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0) max_sum+=a[i];
			if(a[i]>0 && a[i]<min && a[i]%2!=0) {
				min=a[i];pres=true;
			}
			if(a[i]<0 && a[i]>max && a[i]%2!=0){
				max=a[i];
			}
		}
		if(max_sum%2!=0) {
			cout<<max_sum<<"\n";return 0;
		}
		else{
			if(pres){
				int mi= (min<-1*max) ? min:-1*max;
				cout<<max_sum-mi<<"\n";
				return 0;
			}
			else{
				cout<<max_sum+max<<"\n";
				return 0;
			}
		}
//	}
	return 0;
}
