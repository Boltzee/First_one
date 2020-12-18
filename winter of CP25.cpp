#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	if(s.length()==1){
		cout<<"0\n";return 0;
	}
	int n=s.length();
	cout<<"3\n";
	cout<<"R "<<n-1<<"\n";
	cout<<"L "<<n<<"\n";
	cout<<"L "<<"2\n";
	return 0;
}
