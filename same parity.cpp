#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		int ans[k];
		if(k>n)
		  cout<<"NO\n";
		else{
		if(n%2==1 && k%2==0){
			cout<<"NO"<<"\n";
		}
		else if(n%2==1 && k%2==1){
			for(int i=0;i<k;i++){
				ans[i]=1;
			}
			ans[k-1]=n-(k-1);
			cout<<"YES\n";
			for(int i=0;i<k;i++){
				cout<<ans[i]<<" ";
			}cout<<"\n";
		}
		else if(n%2==0 && k%2==1){
			if(2*(k-1)>=n){
				cout<<"NO\n";continue;
			}
			for(int i=0;i<k;i++){
				ans[i]=2;
			}
			ans[k-1]=n-2*(k-1);
			cout<<"YES\n";
			for(int i=0;i<k;i++){
				cout<<ans[i]<<" ";
			}cout<<"\n";
		}
		else{
			if(2*(k-1)>=n){
				for(int i=0;i<k;i++){
				ans[i]=1;
		      	}
			    ans[k-1]=n-(k-1);
			     cout<<"YES\n";
			    for(int i=0;i<k;i++){
				   cout<<ans[i]<<" ";
			    }cout<<"\n"; continue;
			}
			for(int i=0;i<k;i++){
				ans[i]=2;
			}
			ans[k-1]=n-2*(k-1);
			cout<<"YES\n";
			for(int i=0;i<k;i++){
				cout<<ans[i]<<" ";
			}cout<<"\n";
		}
      }
	}
	return 0;
}
