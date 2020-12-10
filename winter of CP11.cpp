#include<iostream>
#include<string.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n,q;cin>>n>>q;
		string s;
		cin>>s;
		while(q--){
			bool ins=false;
			int l,r;cin>>l>>r;
			char pivot1=s[l-1],pivot2=s[r-1];
			for(int i=0;i<l-1;i++){
				if(s[i]==pivot1){
					ins=true;break;
				}
			}
			for(int i=r;i<s.length();i++){
				if(s[i]==pivot2){
					ins=true;break;
				}
			}
			if(ins){
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}
	}
	return 0;
}
