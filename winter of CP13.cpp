#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		vector <int> vec;
		for (int i=0;i<n;i++) {
			int x;cin>>x;vec.push_back(x);
		}
		sort(vec.begin(),vec.end());
//		for(auto x:vec) cout<<x<<" ";
//		cout<<"\n";
		int i=0;
		int j=n-1;
		vector <int> ans;
		while(i<j){
//			cout<<"the value of v[i++] is "<<vec[i++]<<" the value of i++ is "<<i++<<"\n";
			ans.push_back(vec[i++]);
			ans.push_back(vec[j--]);
		}
		if(i==j){
			ans.push_back(vec[i]);
		}
		for(auto it=ans.rbegin();it<ans.rend();it++){
			cout<<*it<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
