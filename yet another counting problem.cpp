#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	cin>>T;
	cin>>T;
	while(T--){
		int a,b,q,lcm,j=0;
		cin>>a>>b>>q;
		if(a==b){
			for(int i=0;i<q;i++){
				cout<<"0 ";
			}cout<<"\n";
			continue;
		}
		int ans[q];
		lcm=(a*b)/(__gcd(a,b));
		int cont=0;
		for(int i=1;i<=lcm;i++){
			if((i%a)%b==(i%b)%a)
			 cont++;
		}
		while(q--){
			unsigned long long int l,r,ans1=0;
			cin>>l>>r;
			int num;
			num=(r-l)/lcm;
			if((r-l)%lcm!=0){
			     	
			}
			else{
				ans=ans+num*cont;
				if(r==l){
					if((l%a)%b==(l%b)%a)
					  ans1++;
				}
			}
			ans[j]=ans1;j++;
		}
		for(int i=0;i<j;i++){
			cout<<ans[i]<<" ";
		}cout<<"\n";
	}
	return 0;
}
