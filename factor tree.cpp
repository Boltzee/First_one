#include <bits/stdc++.h> 
using namespace std; 

void add_edge(vector<int> adj[], int src, int dest) 
{ 
	adj[src].push_back(dest); 
	adj[dest].push_back(src); 
} 

bool BFS(vector<int> adj[], int src, int dest, int v, 
		int pred[]) 
{ 
	list<int> queue; 
	bool visited[v]; 
	for (int i = 0; i < v; i++) { 
		visited[i] = false; 
		pred[i] = -1; 
	} 
	visited[src] = true; 
	queue.push_back(src); 

	while (!queue.empty()) { 
		int u = queue.front(); 
		queue.pop_front(); 
		for (int i = 0; i < adj[u].size(); i++) { 
			if (visited[adj[u][i]] == false) { 
				visited[adj[u][i]] = true; 
				pred[adj[u][i]] = u; 
				queue.push_back(adj[u][i]); 
				if (adj[u][i] == dest) 
					return true; 
			} 
		} 
	} 

	return false; 
} 

void printShortestDistance(vector<int> adj[], int s, 
						int dest, int v,vector<int> &path) 
{ 
	int pred[v]; 

	if (BFS(adj, s, dest, v, pred) == false) { 
		return; 
	} 

	int crawl = dest; 
	path.push_back(crawl); 
	while (pred[crawl] != -1) { 
		path.push_back(pred[crawl]); 
		crawl = pred[crawl]; 
	} 
} 

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  int T;
  cin>>T;
  while(T--){
  	int n,q;
  	cin>>n>>q;
  	int a[n+2];
  	vector<int> tr[n+2];
  	for(int i=1;i<=n;i++){
  		cin>>a[i];
	  }
	for(int i=0;i<n-1;i++){
		int x,y;
		cin>>x>>y;
		add_edge(tr,x,y);
	}
	while(q--){
		int s,d;
		cin>>s>>d;
		vector<int> p;
		printShortestDistance(tr,s,d,n+2,p);
		for(int i=0;i<p.size();i++){
			p[i]=a[p[i]];
		}
		sort(p.begin(),p.end());
		int temp=INT_MAX;
		for(int i=0;i<p.size()-1;i++){
            if(p[i+1]-p[i]<temp){
            	temp=p[i+1]-p[i];
			}
		}
		p.clear();
		cout<<temp<<"\n";
	}
// 	tr.clear();
  }
  return 0; 
} 

