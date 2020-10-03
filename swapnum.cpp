#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int a,b;
		int c[5],d[5],sum[5];
		cin>>a>>b;
		sum[0]=a+b;
		c[0]=a/10;
		c[1]=a%10;
		d[0]=b/10;
		d[1]=b%10;
		sum[1]=c[1]*10+d[0]+d[1]+c[0]*10;
		sum[2]=(d[0]+d[1])*10+c[0]+c[1];
		int max;
		if(sum[0]>sum[1]){
			max=sum[0];
		}
		else{
			max=sum[1];
		}
		if(max<sum[2]){
			max=sum[2];
		}
		cout<<max<<"\n";
	}
	return 0;
}
