#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;cin>>n;
	unordered_map <int , string> u;
	for(int i=0;i<n;i++){
		string a,b;
		int num;
		cin>>a;
		if(a=="add"){
            cin>>num>>b;
            u[num]=b;
		}
		else if(a=="del"){
            cin>>num;
            u[num]="not found";
		}
		else{
            cin>>num;
            if(u.find(num)==u.end()) cout<<"not found\n";
            else cout<<u[num]<<"\n";
		}
	}
	return 0;
}
