#include<iostream>
#include<string.h>
using namespace std;

void cleaner(string &s, int index){
	int end;
	bool ins=false;
	for(int i=index+1;i<s.length() && s.length()!=0;i++){
		if(s[i]!='0'){
			end=i;ins=true;
		}
	}
	if(!ins){
		end=s.length();
	}
//	cout<<"index "<<index<<" end "<<end<<"\n";
	s.erase(s.begin()+index,s.begin()+end-1);
}


int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		string s;cin>>s;
		int ld=0;
		int tr=0;
		for(int i=0;i<s.length();i++){
			if(s[i]!='0'){
				break;
			}
			else{
				ld++;
			}
		}
		for(int i=s.length()-1;i>=0;i--){
			if(s[i]!='1'){
				break;
			}
			else{
				tr++;
			}
		}
		int add=0;
		for(int i=0;i<s.length()-1;i++){
			if(s[i]=='1' && s[i+1]=='0') {
				add++;break;
			}
		}
//		if(ld==0 && tr==0){
//			cout<<"0\n";continue;	
//		}
		for(int i=0;i<ld;i++){
			cout<<"0";
		}
		for(int i=0;i<add;i++){
			cout<<"0";
		}
		for(int i=0;i<tr;i++){
			cout<<"1";
		}cout<<"\n";
//		cout<<s<<"\n";
	}
	return 0;
}
