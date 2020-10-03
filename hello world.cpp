#include<bits/stdc++.h>
using namespace std;

int main(){
	int b,c;cin>>b>>c;
	vector <int> vec={1,2,3,4,5};
	vector <int> temp(vec.begin()+b-1,vec.begin()+c);
	for(auto x:temp) cout<<x<<" ";
	return 0;
}

