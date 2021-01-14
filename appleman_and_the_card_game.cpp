#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
	int n,k;cin>>n>>k;
	char letters[n];
	int freq[27]={0};
	for(int i=0;i<n;i++){
		cin>>letters[i];
		freq[letters[i]-65]++;
	} 
	sort(freq,freq+27);
	int ans=0;
	for(int i=26;i>=0 && k!=0;i--){
		if(freq[i]>=k){
			ans+= k*k;
			k=0;
		}
		else{
			k=k- freq[i];
			ans+= freq[i] * freq[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}