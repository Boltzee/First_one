#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		long long int x,y,a,b,min0,max0,min1,max1,sum=0;
		cin>>x>>y;
		cin>>a>>b;
		min0=min(x,y);
		max0=max(x,y);
		min1=min(a,b);
		max1=max(a,b);
		sum=sum+(max0-min0)*a;
		if(2*a>b){
			sum=sum+min0*b;
		}
		else{
			sum=sum+min0*2*a;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
