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
		long long int x,y,l,r;
		cin>>x>>y>>l>>r;
		long long int n=x,m=y;
		int a[100]={0},b[100]={0},j=0,k=0;
		while(n!=0){
			a[j]=(n%2);n=n/2;j++;
		}
		j++;
		while(m!=0){
			b[k]=(m%2);m=m/2;k++;
		}
		k++;
		int o=max(j,k);
		int p[100],h=0;
		for(int i=0;i<o;i++){
			if(a[i]==0 && b[i]==0){
			   p[h]=0;
			   h++;
		    }
			else{
				p[h]=1;h++;
			}
		}
		long long int sum=0;
		int i=0;
		while(sum+p[i]*pow(2,i)<=r){
			sum=sum+p[i]*pow(2,i);i++;
		}
		if((x&sum)*(y&sum)>0){
			cout<<sum<<"\n";}
		else
		   cout<<l<<"\n";
	}
	return 0;
}
