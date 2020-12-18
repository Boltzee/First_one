#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> vec[],int x,int y){
	vec[x].push_back(y);
	vec[y].push_back(x);
//	return 0;
}


int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T; cin>>T;
	while(T--){
		int degree[1005]={0};
        int depth[1005]={0};
		bool visited[1005]={false};
		vector <int> vec[1005];
		int n,x; cin>>n>>x;
		if(n==1){
			cout<<"Ayush\n";continue;
		}
		for(int i=0;i<n-1;i++){
			int x,y;cin>>x>>y;
			add_edge(vec,x,y);
			degree[x]++;degree[y]++;
		}
		if(degree[x]==1){
			cout<<"Ayush\n";continue;
		}
		else{
			if(n%2!=0){
				cout<<"Ashish\n";continue;
			}
			else{
				cout<<"Ayush\n";continue;
			}
		}
	}
	return 0;
}
