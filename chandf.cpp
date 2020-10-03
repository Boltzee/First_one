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
		long long int x,y,l,r,sum=0;
		cin>>x>>y>>l>>r;
		long long int n=x,m=y;
		int a[100]={0},j=0;
		while(sum+pow(2,j)<=r){
			if(n!=0 || m!=0){
				if((n%2)|(m%2)){
					a[j]=1;sum=sum+pow(2,j);
					j++;
				}
				else
				  j++;
				n=n/2;m=m/2;
			}
			else{
				break;
			}
		}
		if((x&sum)*(y&sum)>0){
			long long int temp=sum,temp1=(x&sum)*(y&sum);
		    for(int i=temp;i<=r;i++){
			 if((x&i)*(y&i)>temp1)
			      sum=i;
		    }
		    cout<<sum<<"\n";
		}
		else
		  cout<<l<<"\n";
	}
	return 0;
}
