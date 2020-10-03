#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int a[200005];
void add_edge(vector<int> fr[],int x,int y){
	fr[x].push_back(y);
	fr[y].push_back(x);
}

void dfs(int n,vector<int> gr[],int s,int pre[],int dep[]){
	bool visited[n+2]={false};pre[s]=-1;
	stack<int> main;
	main.push(s);
	visited[s]=true;
	while(!main.empty()){
		int u=main.top();
		main.pop();
		for(int i=0;i<gr[u].size();i++){
			if(!visited[gr[u][i]]){
				visited[gr[u][i]]=true;
				pre[gr[u][i]]=u;
				dep[gr[u][i]]=dep[u]+1;
				main.push(gr[u][i]); 
			}
		}
	}
}

bool path_finder(int g, int h, vector <int> &path,const int dept[],const int pre[]){
	int crawl1=g,crawl2=h;
	int freq[105]={0};
//	memset(freq,0,sizeof(freq));
	vector <int> path1,path2;
	int size=0;
	if(dept[crawl1]>dept[crawl2]){
		path1.push_back(crawl1);size++;freq[a[crawl1]]++;
		int flag=0;
		while(dept[crawl1]!=dept[crawl2] ){
			if(pre[crawl1]==crawl2){
				flag=1;break;
			}
			size++;
			path1.push_back(pre[crawl1]);
			freq[a[pre[crawl1]]]++;
			if(freq[a[pre[crawl1]]]>1) 
			{return false;}
			crawl1=pre[crawl1];
		}
		path2.push_back(crawl2);
		freq[a[crawl2]]++;
		if(freq[a[crawl2]]>1) {
		   return false;}
		size++;
		if(flag==1) goto kiran;
	}
	else if(dept[crawl1]<dept[crawl2]){
		path2.push_back(crawl2);size++;freq[a[crawl2]]++;
		if(freq[a[crawl2]]>1) {
		   return false;}
		int flag=0;
		while(dept[crawl2]!=dept[crawl1]){
			if(pre[crawl2]==crawl1){
				flag=1;break;
			}
			size++;
			path2.push_back(pre[crawl2]);
			freq[a[pre[crawl2]]]++;
		    if(freq[a[pre[crawl2]]]>1) {
		       return false;}
			crawl2=pre[crawl2];
		}
		path1.push_back(crawl1);size++;
		freq[a[crawl1]]++;
		if(freq[a[crawl1]]>1) 
		{return false;}
		if(flag==1) goto kiran;
	}
	else{
		path2.push_back(crawl2);freq[a[crawl2]]++;
		if(freq[a[pre[crawl2]]]>1) {
		   return false;}
		path1.push_back(crawl1);freq[a[crawl1]]++;
		if(freq[a[pre[crawl1]]]>1) 
			{return false;}
		size+=2;
	}
	while(pre[crawl1]!=pre[crawl2]){
		path1.push_back(pre[crawl1]);path2.push_back(pre[crawl2]);size+=2;
		freq[a[pre[crawl2]]]++;
        if(freq[a[pre[crawl2]]]>1) {
		   return false;}
		freq[a[pre[crawl1]]]++;
        if(freq[a[pre[crawl1]]]>1) 
			{return false;}
		if(size>100)  {
		 return false;}
		crawl1=pre[crawl1];crawl2=pre[crawl2];
	}
	if(pre[crawl1]!=-1){
	path1.push_back(pre[crawl1]);size++;
	freq[a[pre[crawl1]]]++;
    if(freq[a[pre[crawl1]]]>1) 
		{return false;}
    }
	kiran:
	if(size>100) {
	  return false;}
	for( auto x: path1){
		path.push_back(x);
	}
	for(int i=path2.size()-1;i>=0;i--){
		path.push_back(path2[i]);
	}
	return true;
}


int main(){
	fast();int T;
	cin>>T;
	while(T--){
		int n,q;
		cin>>n>>q;
//		int a[n+1];
		vector<int> tr[n+2];
		int pred[n+2],depth[n+2]={0};
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			int a,b;cin>>a>>b;
			add_edge(tr,a,b);
		}
		dfs(n,tr,1,pred,depth);
		while(q--){
			int u,v;cin>>u>>v;
			vector<int> p;
			bool q=path_finder(u,v,p,depth,pred);
			if(q==false){
				cout<<"0\n";continue;
			}
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
		    cout<<temp<<"\n";
		}
	}
	return 0;
}

