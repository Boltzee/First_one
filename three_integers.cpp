#include<iostream>
using namespace std;
#define int long long int
signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	while(t--){
		int a,b,c,a1,b1,c1;cin>>a>>b>>c;
		int MAX=INT_MAX;
		for(int i=1;i<2*a;i++){
			for(int j=1;i*j<=2*b;j++){
				for(int k=1;i*j*k<=2*c;k++){
                    int diff= abs(i-a)+abs(i*j-b)+abs(i*j*k-c);
                    if(diff<MAX){
                    	MAX=diff;
                        a1=i;b1=j*i;c1=i*j*k;
                    }
				}
			}
		}
		cout<<MAX<<"\n";
		cout<<a1<<"  "<<b1<<" "<<c1<<"\n";
	}
    return 0;
}