#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define mk make_pair
#define mod 1000000007
void add_edge(vector <int> vec[],int x,int y){
	vec[x].pb(y);
	vec[y].pb(x);
}
bool visited[100005];
void initialise(){
	for(int i=0;i<100005;i++){
		visited[i]=false;
	}
}
void modify_size(vector <int> vec[],int element,int size[]){
	visited[element]=true;
	for(int i=0;i<vec[element].size();i++){
		if(!visited[vec[element][i]]){
		visited[vec[element][i]]=true;
		modify_size(vec,vec[element][i],size);
		size[element]+=size[vec[element][i]];
//		cout<<element <<"the size of the given element\n";}
	}}
	size[element]+=1;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
	int n;
	cin>>n;
	initialise();
	vector <int > vec[n+1];
	for(int i=0;i<n-1;i++){
		int x,y;cin>>x>>y;
		add_edge(vec,x,y);
	}
	int size[n+1]={0};
	vector <int> vertices;
	modify_size(vec,1,size);
	for(int i=2;i<n+1;i++){
		vertices.pb((size[i])*(n-size[i]));
	}
	sort(vertices.begin(),vertices.end());
	
	int m,k;cin>>m;
	vector <int> value;
	for(int i=0;i<m;i++){
		cin>>k;
		value.pb(k);
	}
//	for(auto x:vertices) cout<<x<<" ";
	sort(value.begin(),value.end());
	int sum=0;
	if(m>n-1){
		int i,mul=1;
//		cout<<"the size of vertices vector is "<<vertices.size()<<"\n";
		for(i=0;i<vertices.size()-1;i++){
			sum+=(vertices[i]*value[i])%mod;
		}
//		cout<<"the value of i is "<<i<<" and the value of value is "<<value.size()<<"\n";
		int limit=m-n+2,q=value.size()-1;
		while(limit>0){
			mul=(mul*value[q])%mod;q--;limit--;
		}
//		mul=mul%mod;
//		for(int j=i;j<value.size();j++){
//			mul*=value[j]%mod;
//		}
		sum+=(vertices[vertices.size()-1]*mul)%mod;
		cout<<sum%mod<<"\n";continue;
	}
	else{
		int op=vertices.size()-1;
		for(int i=value.size()-1;i>=0;i--){
			sum+=(vertices[op]*value[i])%mod;
			op--;
		}
		for(int i=op;i>=0;i--){
			sum+=vertices[i];
		}
		cout<<sum%mod<<"\n";
	}}
	return 0;
}
