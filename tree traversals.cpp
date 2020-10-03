#include<bits/stdc++.h>
using namespace std;
long long int key[100005];
int left1[100005],right1[100005];
int n;
vector <long long int> vec(n),bec(n),hek(n);
void check1(int k){
	if(left1[k]!=-1) {
		check1(left1[k]);
	}
	vec.push_back(key[k]);
	if(right1[k]!=-1){
		check1(right1[k]);
	}
	return ; 
}

void check2(int k){
	bec.push_back(key[k]);
	if(left1[k]!=-1) {
		check2(left1[k]);
	}
	if(right1[k]!=-1){
		check2(right1[k]);
	}
	return ;
}

void check3(int k){
	if(left1[k]!=-1){
		check3(left1[k]);
	}
	if(right1[k]!=-1){
		check3(right1[k]);
	}
	hek.push_back(key[k]);
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin>>n;
	if(n==0){
		cout<<"CORRECT\n";
		return 0;
	}
	for(int i=0;i<n;i++){
		cin>>key[i]>>left1[i]>>right1[i];
	}
	check1(0);
	check2(0);
	check3(0);
	for(auto x:vec) cout<<x<<" ";
	cout<<"\n";
	for(auto x:bec) cout<<x<<" ";
	cout<<"\n";
	for(auto x:hek) cout<<x<<" ";
	cout<<"\n";
	return 0;
}
