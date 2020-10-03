#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		int a[5001];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int found=0;
		int i=0;
		while(i<n-1){
				for(int m=i+2;m<n;m++){
					if(a[m]==a[i]){
					  found=1;break;}
					else{continue;}
				}
			i++;
		}
		if(found==1){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
