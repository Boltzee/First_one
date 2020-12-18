#include<bits/stdc++.h>
using namespace std;
#define mod 2e12
#define int long long int
int nb,ns,nc,pb,ps,pc;
int r;
int num_s=0,num_b=0,num_c=0;


int cost(int middle){
	int k=0;
	return max(k,num_c*middle-nc)*pc+max(k,num_b*middle-nb)*pb+max(k,num_s*middle-ns)*ps;
}


int32_t main(){
	string s;cin>>s;
	cin>>nb>>ns>>nc;cin>>pb>>ps>>pc;
	cin>>r;
	
	for(auto x: s){
		if(x=='B') num_b++;
		else if(x=='S') num_s++;
		else num_c++;
	}
//	cout<<num_c<<"\n";
	int left=0,right=mod;
	int middle;
	while(left<=right){
		middle=(left+right)/2;
//		cout<<"the value of middle is "<<middle<<"\n";
//		cout<<"the value of left is "<<left<<" and the value of right is "<<right<<"\n";
		int c= cost(middle);
//		cout<<"the cost is "<<c<<"\n";
		if(c==r){
			cout<<middle<<"\n";return 0;
		}
		else if(c<r) left=middle+1;
		else right= middle-1;
	}
	if(cost(middle)<=r) {
	cout<<middle<<"\n";return 0;}
	else cout<<middle-1<<"\n";return 0;
}
