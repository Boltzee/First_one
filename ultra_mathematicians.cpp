#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define int long long int

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	string x,y;cin>>x>>y;
	char ans[x.length()];
    for(int i=0;i<x.length();i++){
    	if(x[i]==y[i]){
    		ans[i]='0';
    	}
    	else{
    		ans[i]='1';
    	}
    }
    for(int i=0;i<x.length();i++){
    	cout<<ans[i];
    }cout<<"\n";
	return 0;
}