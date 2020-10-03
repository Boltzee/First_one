#include<iostream>
using namespace std;
#define mod 1000000007
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int product=a[0];
	int b[n],j=1,i=0;
	b[0]=a[0];
	while(i+k<n){
		product=a[i+1];
		int l;
       for(int m=i+1;m<=i+k;m++){
       	 if(a[m]<product)
       	 	 product=a[m];
       	 	 l=m;
       }
       b[j]=product;j++;
       i=l;
	}
    b[j]=a[n-1];j++;
    for(int m=0;m<j;m++){
    	cout<<b[m]<<" ";
	}cout<<"\n";
    long long int ans=1;
    for(int m=0;m<j;m++){
        ans=((ans%mod)*(b[m]%mod))%mod;
    }
    cout<<ans<<"\n";
    return 0;
}
