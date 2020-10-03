#include<iostream>
#include<utility>
#include<vector>
using namespace std;

void solve(int &a[],vector <pair<int,int> > &vec){
	
}

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,m;
		cin>>n>>m;
		vector <pair<int,int> > vec;
		int p,a[n+1];
		for(int i=1;i<=n;i++){
			cin>>p;
			a[p]=i;
		}
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			vec.push_back(make_pair(x,y));
		}
		solve(a,vec);
		int count=0;
		kiran:
		for(int i=1;i<n+1;i++){
			if(i!=a[i]){
				int temp;
				temp=a[a[i]];
				a[a[i]]=a[i];
				a[i]=temp;
				count++;
			}
		}
		for(int i=1;i<n;i++){
		    if(a[i]>a[i+1]){
			  goto kiran;}
		}
		cout<<count<<"\n";
	}
	return 0;
}
