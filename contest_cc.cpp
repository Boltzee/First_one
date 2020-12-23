#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
		int x,y,K,N;
		cin>>x>>y>>K>>N;
		if(x==y){
			cout<<"Yes\n";continue;
		}
		if(x>y){
			int pos_thief=y,pos_pol=x;
			bool ins=false;
			while(!ins && pos_thief<=pos_pol){
				pos_thief+=K;
				pos_pol-=K;
				if(pos_pol==pos_thief) ins=true;
			}
			if(ins) cout<<"Yes\n";
			else cout<<"No\n";
		}
		else{
			int pos_thief=y,pos_pol=x;
			bool ins=false;
			while(!ins && pos_thief>=pos_pol){
				pos_thief-=K;
				pos_pol+=K;
				if(pos_pol==pos_thief) ins=true;
			}
			if(ins) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	return 0;
}