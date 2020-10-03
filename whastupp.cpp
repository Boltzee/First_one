#include<iostream>
#include<vector>
using namespace std;
//vector <int> vec;

int fond(long long int m, vector<int> &vec){
	int i=0;
	while(i<=m*m){
		if(i==0 || i==1){
			vec.push_back(i);
		}
		else if(m!=2){
			int l=(vec[i-1]%m+vec[i-2]%m)%m;
			vec.push_back(l);
			if(vec.size()%2==0){
				int temp=vec.size()/2;
				int count=0;
				for(int i=0;i+temp<vec.size();i++){
					if(vec[i]==vec[i+temp]) count++;
				}
				if(count==temp){
					vec.erase(vec.begin()+temp);
					return count;
				}
			}
		}
		else{
			return 3;
		}
		i++;
	}
}

int fibonacci(long long int a,long long int b,vector<int> &vec){
	long long int period=fond(b,vec);
	a=a%period;
	vec.clear();
	return vec[a];
}

int main(){
	int t;cin>>t;
	while(t--){
	long long int n,m;
	vector <int> vec;
	cin>>n>>m;
	long long int ans=fibonacci(n,m,vec);
	cout<<ans<<"\n";}
}
