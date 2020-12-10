#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n,x;cin>>n>>x;
		int a[n];
		int count=0;
		long long int sum=0;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			if(a[i]%x==0) count++;
			sum+=a[i];
		}
		if(count==n){
			cout<<"-1\n";
		}
		else if(sum%x!=0){
			cout<<n<<"\n";
		}
		else{
			int left,right;
			for(int i=0;i<n;i++){
				if(a[i]%x!=0){
					left=i;break;
				}
			}
			for(int i=n-1;i>=0;i--){
				if(a[i]%x!=0){
					right=i;break;
				}
			}
//			cout<<"left"<<left<<" right"<<right<<"\n";
			if(left+1>n-right){
				cout<<right<<"\n";
			}
			else{
				cout<<n-(left+1)<<"\n";
			}
		}
		
	}
	return 0;
}
