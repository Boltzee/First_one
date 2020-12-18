#include<bits/stdc++.h>
using namespace std;
#define ran 200030
vector <int> vec[ran];

void add_edge(int x,int y){
	vec[x].push_back(y);
	vec[y].push_back(x);
	return;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//	int i='z'-96;cout<<i;
	int n;cin>>n;
	string s[n];
	int mask[n];
	int h=27;
	for(int i=0;i<n;i++){
		mask[i]=h;h++;
		cin>>s[i];
		for(auto x:s[i]){
//			cout<<x<<" ";
			int temp=x-96;
			add_edge(temp,mask[i]);
		}
	}
//	for(int i=1;i<31;i++){
//		cout<<"the number is "<<i<<"\n";
//		for(int j=0;j<vec[i].size();j++){
//			cout<<vec[i][j]<<" ";
//		}cout<<"\n";
//	}
	bool visited[n+26+5]={false};
	int count=0;
//	for(int i=1;i<27;i++){
//		cout<<vec[i].size()<<" ";
//	}cout<<"\n";
//	cout<<((3<27) && !visited[3] && (vec[3].size()!=0))<<"\n";
//	cout<<vec[27].size()<<"\n";
	for(int i=1;i<27;i++){
		if(!visited[i] && vec[i].size()!=0){
//		cout<<"lets begin"<<i<<"\n";
		stack <int> s;
		s.push(i);
		visited[i]=true;
		while(!s.empty()){
			int element=s.top();
			s.pop();
			for(int j=0;j<vec[element].size();j++){
				if(!visited[vec[element][j]]){
//					cout<<vec[element][j]<<"additional\n";
					visited[vec[element][j]]=true;
					s.push(vec[element][j]);
				}
			}
		}
		count++;
	}	
	}
	cout<<count<<"\n";
	return 0;
}
