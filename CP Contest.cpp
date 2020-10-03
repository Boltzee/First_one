#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	vector <int> pos;
	vector <char> dist;
	int k,u,l,count=1;
	bool present=false;
	string a,b;
	cin>>k;
	cin>>a;
	u=k-1;
	b=a;
	l=a.length();
	sort(b.begin(),b.end());
	dist.push_back(b[0]);
	for(int i=0;i<l-1;i++){
		if(b[i]!=b[i+1]){
			count++;
			dist.push_back(b[i+1]);
		}
	}
	if(l>k || l<k){
		present=false;
	}
	else{
		present=true;
	}
	if(k>l || k>count){
		cout<<"NO"<<"\n";
	}
	else{
		if(!present){
			for(int i=0;i<dist.size();i++){
				if(a.find(dist[i])!=string::npos){
					pos.push_back(a.find(dist[i]));
				}
			}
			sort(pos.begin(),pos.end());
			cout<<"YES"<<"\n";
			int i=0;
			int j=1;
			while(a[i]!='\0' && j<=k){
				if(j<=k)
				  cout<<a[i];
				i++;
				if(i==pos[j] && u>0){
					j++;u--;
					cout<<"\n";
				}
				if(i==pos[j] && u==0){
					cout<<a[i];
					i++;
				}
			}
		}
		else{
			if(count==k){
				cout<<"YES"<<"\n";
				for(int i=0;i<l;i++){
					cout<<a[i]<<"\n";
				}
			}
			else{
				cout<<"NO"<<"\n";
			}
		}
	}
	return 0;
}
