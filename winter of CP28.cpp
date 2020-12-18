#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n,k;cin>>n>>k;
		int h=k;
		string s; cin>>s;
		string a=s;
		for(int i=0;i<a.length();i++){
			if(a[i]=='L'){
				a.erase(a.begin()+i,a.begin()+i+1);i-=1;
			}
			else break;
		}
		for(int i=a.length()-1;i>=0;i--){
			if(a[i]=='L'){
				a.erase(a.begin()+i,a.begin()+i+1);
			}
			else break;
		}
//		cout<<" the stripped string is "<<a<<"\n";
		s=a;
		bool st=false,e=false;
		int wins=0;
		vector <int> gaps;
		int start,end;
		for (int i=0;i<s.length();i++){
			if(s[i]=='W'){
				wins++;
			}
			if(s[i]=='W' && st==true){
				gaps.push_back(i-start);
				st=false;
			}
			if(s[i]=='L' && !st){
				st=true; start=i;
			}
		}
		if(st==true) gaps.push_back(s.length()-start);
//		cout<<"the size of gaps is "<<gaps.size()<<"\n";
//		for (auto x: gaps) cout<<x<<" ";
//		cout<<"\n"<<wins<<"\n";
		if(wins+k>=n){
			cout<<2*n-1<<"\n";
			continue;
		}
		sort(gaps.begin(),gaps.end());
		if(wins==0 && gaps.size()==0 && k==0){
			cout<<0<<"\n";
			continue;
		}
//		cout<<"the size of gaps is "<<gaps.size()<<"\n";
		int add=0;
		for(int i=0;i<gaps.size();i++){
			if(gaps[i]<=k){
				add++;
				k-=gaps[i];
			}
			else break;
		}
//		cout<<2*(h+wins)-gaps.size()<<"\n";
		cout<<2*(h+wins)-(gaps.size()+1)+add<<"\n";
	}
	return 0;
}
