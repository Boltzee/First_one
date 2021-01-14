#include<bits/stdc++.h>
using namespace std;

#define int long long int 

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		int red[n];
		int max_sum=0;
		int temp = 0;
		for(int i=0;i<n;i++){
			cin>>red[i];
			max_sum+=red[i];
			if(max_sum>temp){
				temp = max_sum;
			}
		}
		int m;cin>>m;
		int blue[m];
		max_sum=0;
		int temp2=0;
		for(int i=0;i<m;i++){
			cin>>blue[m];
			max_sum+= blue[m];
			if(max_sum>temp2){
				temp2= max_sum;
			}
		}
		int k=0;
		cout<<max(k,temp2+temp)<<"\n";
	}
}