#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	long long int prd2=1;
	vector <int> vec1,vec2,vec3;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(x==0) vec3.push_back(x);
		else if(x<0){
			vec1.push_back(x);
		}
		else{
			vec2.push_back(x);
		}
	}
	if(vec2.size()==0){
		vec2.push_back(vec1[vec1.size()-1]);
		vec1.pop_back();
		vec2.push_back(vec1[vec1.size()-1]);
		vec1.pop_back();
	}
	if(vec1.size()%2==0){
		vec3.push_back(vec1[vec1.size()-1]);
		vec1.pop_back();
	}
    cout<<vec1.size()<<" ";
    for(auto x:vec1) cout<<x<<" ";
    cout<<"\n";
    cout<<vec2.size()<<" ";
    for(auto x:vec2) cout<<x<<" ";
    cout<<"\n";
    cout<<vec3.size()<<" ";
    for(auto x:vec3) cout<<x<<" ";
    cout<<"\n";
    return 0;
}
