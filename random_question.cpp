#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];for(int i=0;i<n;i++ ) cin>>a[i];
	sort(a,a+n);
	int ans=(n-1)/2;
	vector <int> one,two;
    for(int i=0;i<ans;i++){
    	one.push_back(a[i]);
    }
    for(int i=ans;i<n;i++) two.push_back(a[i]);
    vector <int> ans2;
    int i=two.size()-1,j=one.size()-1;
    int h=0; 
    while(ans2.size()<n){
    	if(h%2==0) {ans2.push_back(two[i]);i--;}
    	else if(h%2==1 && j>=0) {ans2.push_back(one[j]);
    	j--;}
    	h++;
    }
    cout<<ans<<"\n";
    for(auto x: ans2) cout<<x<<' ';cout<<"\n";
}