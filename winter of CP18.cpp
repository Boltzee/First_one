#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int pos=n-1;
		for(int i=n-1;i>0;i--){
			if(a[i-1]>=a[i]) pos--;
			else break;
		}
		for(int i=pos;i>0;i--){
			if(a[i-1]<=a[i]) pos--;
			else break;
		}
		cout<<pos<<"\n";
	}
	return 0;
}
