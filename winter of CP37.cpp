#include<bits/stdc++.h>
using namespace std;
#define int long long int
vector <int> vec[30005];
vector <int> ring;
bool visited[30005]={false};
void add_edge(int x,int y){
	vec[x].push_back(y);vec[y].push_back(x);
}

bool ins=false;
int parent[30005];
bool ito=false;
// int h=0;
//parent[1]=-1;
void dfs(int k){
// 	h++;if(h==10) return;
	visited[k]=true;
	ring.push_back(k);
	for(int i=0;i<vec[k].size();i++){
		
		if(visited[vec[k][i]] && vec[k][i]!=parent[k]){
			ins=true;
			if(vec[k][i]==1) ito=true;
			return;
		}
		if(!visited[vec[k][i]]){
			parent[vec[k][i]]=k;
			dfs(vec[k][i]);
		} 
		
		if(ins) return;
	}
	ring.pop_back();
}

int32_t main(){
	int n;//cin>>n;
	n=3000;
//	for(int i=0;i<n;i++){
//		int x,y;cin>>x>>y;
//		add_edge(x,y);
//	}
    for(int i=1;i<n;i++){
    	add_edge(i,i+1);
	}
	add_edge(n,1);
	int root=1;
	visited[root]=true;parent[root]=-1;
	dfs(root);
	if(!ito) ring.erase(ring.begin(),ring.begin()+1);
	bool ring_present[n+1]={false};
	int depth[n+1];
	int visited1[n+1]={false};
	for(auto x: ring ) {
		cout<<"x "<<x<<' ';
		depth[x]=0;
		ring_present[x]=true;
	}cout<<"\n";
	int ma=ring[0];
	for(int i=1;i<ring.size();i++){
		for(int j=0;j<vec[ring[i]].size();j++){
			if(!ring_present[vec[ring[i]][j]]){
				vec[ma].push_back(vec[ring[i]][j]);
			}
		}
	}
//	for(auto x:ring){
		int root1= ma;
		stack <int> s;
	    s.push(root1);
	    visited1[root1]=true;
	    while(!s.empty()){
	    	int element= s.top();s.pop();
//	    	cout<<"the element is "<<element<<"\n";
	    	for(int i=0;i<vec[element].size();i++){
	    		if(!visited1[vec[element][i]] && !ring_present[vec[element][i]]){
	    			visited1[vec[element][i]]=true;
	    			depth[vec[element][i]]=depth[element]+1;
	    			s.push(vec[element][i]);
				}
			}
		}
//	}
	for(int i=1;i<n+1;i++){
		cout<<depth[i]<<" ";
	}cout<<"\n";
	return 0;
}
