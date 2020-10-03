#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
        int a[10005],b[10003];
		int n,m,c,lcm=1,gcd,j=0;
		int count=0;
		cin>>n>>m;
		for(int i=0;i<m;i++){
			b[i]=i+1;
		}
		for(int i=0;i<n;i++){
			cin>>a[i];
				// b[a[i]-1]=1;
				gcd=__gcd(a[i],lcm);
				lcm=(a[i]*lcm)/gcd;
		}
		int temp=1,max=1;
		for(int i=0;i<m;i++){
			gcd=__gcd(b[i],lcm);
			int k=(lcm*b[i])/gcd;
//			cout<<k<<endl;
			if(k>lcm){
//				cout<<b[i]<<"\n";
				if(k>temp){
					temp=k;
					max=b[i];
				}
//				break;
			}
// 			else{
// 				count++;
// 			}
		}
// 		if(count==m){
// 			cout<<"1"<<"\n";
// 		}
// 		else{
			cout<<max<<"\n";
// 		}
	}
	return 0;
}
