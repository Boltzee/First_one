#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		long long int n,k;
		cin>>n>>k;
		if((n+k)%2==0){
			if(n>=k*k){
				cout<<"YES"<<"\n";
			}
			else{
				cout<<"NO"<<"\n";
			}
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
