#include<iostream>
using namespace std;
#define int long long int 

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		int freq[n+4]={0};
		int a[n];for(int i=0;i<n;i++) {cin>>a[i];freq[a[i]]++;}
		int ans=0;
		// cout<<freq[2]<<"\n";
        for(int i=1;i<n+1;i++){
            int count=0;
            count +=freq[i]*freq[i+1]*freq[i+2];
            count+= (freq[i]*freq[i+1]*(freq[i+1]-1))/2;
            count+= (freq[i]*freq[i+2]*(freq[i+2]-1))/2;
            count+= (freq[i]*freq[i+1]*(freq[i]-1))/2;
            count+= (freq[i]*freq[i+2]*(freq[i]-1))/2;
            // cout<<freq[i]<<"\n";
            count+=(freq[i]*(freq[i]-1)*(freq[i]-2))/6;
            // cout<<count<<"\n";
            ans+=count;
        }
        cout<<ans<<"\n";
	}
	return 0;
}