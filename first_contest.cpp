#include<iostream>
#include<string.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		int ones=0,zeros=0;
		string s; cin>>s;
        for(auto x: s){
        	if(x=='1') ones++;
        	else zeros++;
        }
        int tot=s.length();

        int mis= 120-tot;
        // cout<<mis<<'\n';
        float per= ((ones+mis)/(1.0*120))*100;
        // cout<<"the percentage is "<<per<<"\n";
        if(per>=75.00) cout<<"Yes\n";
        else cout<<"No\n";
	}
}