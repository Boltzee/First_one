#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		int f[53],p[53],q[53]={0};
		cin>>n>>k;
		int sum[53]={0};
		for(int i=0;i<n;i++){
			cin>>f[i];
		}
		for(int i=0;i<n;i++){
			cin>>p[i];
		}
		for(int i=0;i<k;i++){
			for(int m=0;m<n;m++){
				if(f[m]-1==i){
					q[i]++;
					sum[i]=sum[i]+p[m];
				}
			}
		}
		int count=0;
		for(int i=0;i<53;i++){
			if(q[i]==0){
				count++;
			}
		}
		sort(sum,sum+53);
		cout<<sum[count]<<endl;
	}
	return 0;
}

