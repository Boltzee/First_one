#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int k;
		cin>>k;
		char chess[8][8];
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				chess[i][j]='.';
			}//cout<<"\n";
		}
		chess[0][0]='O';
		int count=1;
		int i,j;
//		while(count<=k){
			for( i=0;i<8;i++){
				for( j=0;j<8;j++){
//					if(i==0 && j==0) continue;
//					else{
						if(count==k){
							goto kiran;
						} 
						count++;
//					}
				}
			}
		kiran:
//		cout<<i<<' '<<j<<"\n";
        count=0;
		for(int m=i;m<8;m++){
			for(int n=j;n<8;n++){
				if(m==i && n==j) {
				j=0;continue;}
				else{
				   chess[m][n]='X';
				   count++;
				   if(count==9) goto hello;	
				}
			}
		}
		hello:
		for(i=0;i<8;i++){
			for(j=0;j<8;j++){
				cout<<chess[i][j];
			}cout<<"\n";
		}
	}
	return 0;
}
