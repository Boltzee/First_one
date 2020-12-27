#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
        int n;cin>>n;
        int a[n+1];
        long long int sum=0;
        for(int i=1;i<n+1;i++) {cin>>a[i];sum+=a[i];}
        vector <int> value_of_k;
        for(int i=1;i<=sum;i++){
        	if(sum%i==0){
        		value_of_k.push_back(n-i);
        	}
        }
        for(int i=value_of_k.size()-1;i>=0;i--){
        	int sub= n-value_of_k[i];
        	// cout<<"the value of sub is "<<sub<<"\n";
        	int check_temp= sum/(sub);
        	int temp= 0,temp_sum=0;
        	bool ins=true;
        	for(int i=1;i<n+1;i++){
                 temp_sum+=a[i];
                 if(temp_sum==check_temp){
                 	temp++;temp_sum=0;
                 }
                 else if(temp_sum>check_temp){
                 	ins=false;break;
                 }
        	}
        	if(!ins) continue;
        	else{
        		cout<<value_of_k[i]<<"\n";break;
        	}
        }
	}
	return 0;
}