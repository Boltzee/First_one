#include<bits/stdc++.h>
using namespace std;

#define endl "\n";

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n,m,d;
	cin>>n>>m>>d;
	vector <int> vec;
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int x;cin>>x;
			if(i==0 && j==0){
				temp = x%d;
			}
			if(x%d!=temp){
				cout<<"-1\n";return 0;
			}
			vec.push_back(x);
		}
	}
	sort(vec.begin(), vec.end());
    int median = vec[vec.size()/2 ];
    int ans=0;
    for(int i=0;i<vec.size();i++){
    	ans+= abs(vec[i]-median)/d;
    }
    cout<<ans<<endl;
    return 0;
}
