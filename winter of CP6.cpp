#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int r,b,g,w;
		cin>>r>>b>>g>>w;
		if(r+g+b+w==1){
			cout<<"YES\n";continue;
		}
		int no_odd=0;
			if(r%2!=0) no_odd++;
			if(g%2!=0) no_odd++;
			if(b%2!=0) no_odd++;
			if(w%2!=0) no_odd++;
		if(no_odd<=1){
			cout<<"YES\n";
		}
		else{
			if(r==0 || b==0 || g==0){
				cout<<"NO\n";continue;
			}
			r-=1;g-=1;b-=1;w+=3;
			int num_odd=0;
			if(r%2!=0) num_odd++;
			if(g%2!=0) num_odd++;
			if(b%2!=0) num_odd++;
			if(w%2!=0) num_odd++;
			if(num_odd<=1){
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}
	
	}
	return 0;
}
