#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
         string s;cin>>s;
         int len= s.length();
         if(len%2!=0){
         	cout<<"-1\n";continue;
         }
         else{
         	int count=0;
         	for(auto x:s){
         		if(x=='1') count++;
         	}
         	if(count==len || count==0){
         		cout<<"-1\n";continue;
         	}
         	else{
         		int count2=0;
         		char fir= s[0];
         		int temp_one=0,temp_zero=0;
         		for(auto x : s){
         			if(x==s[0]) count2++;
         			else count2--;
         			if(x=='0') temp_zero++;
         			else temp_one++;
         		}
         		if(count2==0){
         			cout<<"0\n";continue;
         		}
         		int min= (temp_one<temp_zero) ? temp_one:temp_zero;
         		int temp_len= len-2*min;
         		cout<<temp_len/2<<"\n";
         	}
         }
	}
}