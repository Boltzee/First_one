#include<iostream>
#include<string.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;cin>>n;
	int a[n];
	bool ins=false;
	long long int count=0;
	int count2=0;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		if(i>0){
			if(a[i]==1 && a[i-1]==3 && a[i+1]==2){
				count2++;
			}
		}
		if(a[i]==2 && a[i+1]==3){
			cout<<"Infinite\n";ins=true;
			break;
		}
		if(a[i]==3 && a[i+1]==2){
			cout<<"Infinite\n";ins=true;break;
		}
		if((a[i]==1 && a[i+1]==2) || (a[i]==2 && a[i+1]==1)){
			count+=3;
		}
		if((a[i]==1 && a[i+1]==3) || (a[i]==3 && a[i+1]==1)){
			count+=4;
		}
	}
	if(!ins){
		cout<<"Finite\n";
		cout<<count-count2<<"\n";
	}
	return 0;
}
