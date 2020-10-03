#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m,sum=0;
		int a[1001];
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		if(sum>=m){
			cout<<m<<endl;
		}
		else{
			cout<<sum<<endl;
		}
//		sum=a[0];
//		sort(a+1,a+n);int i=n-1;
//		while(sum<=m && i>=1){
//			if(sum+a[i]<=m){
//				sum+=a[i];i--;continue;
//			}
//			else{
//				i--;continue;
//			}
//		}
//		cout<<sum<<endl;
	}
	return 0;
}
