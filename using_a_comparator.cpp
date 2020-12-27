#include<bits/stdc++.h>
using namespace std;

bool comparator(int i,int j){
	return abs(i)<abs(j);
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;cin>>T;
    while(T--){
        int n;vector <int> a(n);
        cin>>n;
        vector <int> neg,pos,zero;
        for(int i=0;i<n;i++){
        	cin>>a[i];
        	if(a[i]<0) neg.push_back(a[i]);
        	else if(a[i]>0) pos.push_back(a[i]);
        	else zero.push_back(a[i]);
        }
        sort(neg.begin(),neg.end());sort(pos.begin(),pos.end());
        if(pos.size()==0 && zero.size()!=0){
        	cout<<"0\n";continue;
        }
        if(pos.size()==0 && zero.size()==0){
        	long long int ans=1;
        	for(int i=neg.size()-1;i>=0;i--){
        		ans*= neg[i];
        	}
        	cout<<"ans\n";continue;
        }
        sort(a.begin(),a.end(),comparator);
        vector <int> ans;int count=0;
        int i=a.size()-1;
        while(ans.size()<=5){
        	
        }
    }
}