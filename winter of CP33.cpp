#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define stop cout<<"\n";return 0;

int main(){
  	int n,m;cin>>n>>m;
  	int a[n+1][m+1];
  	int xor_sum=0;
  	bool present=false;
  	int index[n+1]={0};
  	for(int i=1;i<n+1;i++){
  		for(int j=1;j<m+1;j++){
  			cin>>a[i][j];
  			if(j>1 && a[i][j]!=a[i][1]){
  				present=true;
  				index[i]=j;
			}
		}
		xor_sum^=a[i][1];
	}
	if(xor_sum!=0){
		cout<<"TAK\n";
		for(int i=0;i<n;i++) cout<<"1 ";
		stop;
	}
	else{
		bool ins=false;
		if(!present){
			cout<<"NIE\n";stop;
		}
		else{
			cout<<"TAK\n";
			for(int i=1;i<n+1;i++){
				if(index[i]!=0 && !ins){
					cout<<index[i]<<" ";
					ins=true;
				}
				else{
					cout<<"1 ";
				}
			}
			stop;
		}
	}
	return 0;
}
