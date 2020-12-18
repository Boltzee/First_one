#include<bits/stdc++.h>
using namespace std;
#define stop cout<<"\n";



void add_edge(int x,int y,vector <int> vec[]){
	vec[x].push_back(y);
	vec[y].push_back(x);
}

int main(){
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
	int N;cin>>N;
////	int size[n];
	int ans=0;
	for(int i=1;i<N+1;i++){
		
		int n;
		cin>>n;
		int degree[n+1]={0};
		vector <int> vec[n+1];
		for(int j=0;j<n-1;j++){
			int x,y;cin>>x>>y;
			add_edge(x,y,vec);degree[x]++;degree[y]++;
		}
		int root=1;
		for(int i=1;i<n+1;i++){
			if(degree[i]==1){
				root=i;break;
			}
		}
//		cout<<"the root of the tree is "<<root<<"\n";
		int depth[n+1]={0};
		bool visited[n+1]={false};
		stack <int> s;
		s.push(root);visited[root]=true;
		int temp=0;
		int index;
		while(!s.empty()){
			int element=s.top();
			s.pop();
			for(int k=0;k<vec[element].size();k++){
				if(!visited[vec[element][k]]){
					depth[vec[element][k]]=depth[element]+1;
					if(depth[vec[element][k]]>temp){
						temp=depth[vec[element][k]];
						index=vec[element][k];
					} 
					visited[vec[element][k]]=true;
					s.push(vec[element][k]);
				}
			}
		}
		root= index;
		int depth1[n+1]={0};
		bool visited1[n+1]={false};
		stack <int> d;
		d.push(root);visited1[root]=true;
		int temp1=0;
		while(!d.empty()){
			int element=d.top();
			d.pop();
			for(int k=0;k<vec[element].size();k++){
				if(!visited1[vec[element][k]]){
					depth1[vec[element][k]]=depth1[element]+1;
					if(depth1[vec[element][k]]>temp1){
						temp1=depth1[vec[element][k]];
//						index=vec[element][k];
					} 
					visited1[vec[element][k]]=true;
					d.push(vec[element][k]);
				}
			}
		}
		ans+=temp1;
	}
	cout<<ans;stop;
	return 0;
}
