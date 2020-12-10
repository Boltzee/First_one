#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int count=0;
		for(int i=1;i<n;i++){
			if(a[i]!=k){
				count+= (k-a[i])/a[0];	
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
