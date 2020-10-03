#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		long long int n,j=0;
		cin>>n;
		long long int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2==0 && a[i]%4!=0){
				b[j]=i;j++;
			}
		}
		int k=0;
		for(int i=0;i<j;i++){
			int ul=b[i],ll=b[i];
			for(int m=b[i]-1;m>=0;m--){
				if(a[m]%2!=0){
					ll=m;
				}
				else{
					break;
				}
			}
			for(int m=b[i]+1;m<n;m++){
				if(a[m]%2!=0){
					ul=m;
				}
				else{
					break;
				}
			}
			k=k+((ul-b[i]+1)*(b[i]-ll+1));
		}
		cout<<((n*(n+1))/2)-k<<"\n";
	}
	return 0;
}
