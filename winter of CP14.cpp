#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		vector <int> vec;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			vec.push_back(x);
		}
		int ngp=0;
		int remainder=0;
		sort(vec.begin(),vec.end());
		for(int i=0;i<vec.size();i++){
			remainder++;
			if(remainder>=vec[i]){
				ngp++;
				remainder=0;
			}
		}
		cout<<ngp<<"\n";
	}
	return 0;
}
