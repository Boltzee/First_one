#include<bits/stdc++.h>
using namespace std;

vector <int> vec,ans;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n,k;cin>>n>>k;
		int p[n+1],count=0,j=0;
		for(int i=1;i<=n;i++){
			cin>>p[i];
			if(i!=p[i]){
				vec.push_back(i);
			}
		}
		int i=0;
		bool decre=true;
		for(int i=2;i<=n;i++){
		    if(p[i]>p[i-1])
		      decre=false;
		}
		if(decre){
		    goto kiran;
		}
// 		int i=0;
		while(vec.size()>2 && i<vec.size()){
			int u=vec[i];
			if(p[p[p[u]]]==u || p[p[p[u]]]==p[u]){
				if((p[p[u]]-p[u])*(p[p[u]]-u)>0){
					count++;
					ans.push_back(u);ans.push_back(p[u]);ans.push_back(p[p[u]]);
					vec.erase(vec.begin()+i);
					vec.erase(lower_bound(vec.begin(),vec.end(),p[u]));
					vec.erase(lower_bound(vec.begin(),vec.end(),p[p[u]]));
					i=i-1;
				}
				else if((p[p[u]]-p[u])*(p[p[u]]-u)<0){
					count+=2;
					ans.push_back(u);ans.push_back(p[p[u]]);ans.push_back(p[u]);
					ans.push_back(u);ans.push_back(p[p[u]]);ans.push_back(p[u]);
					vec.erase(vec.begin()+i);
					vec.erase(lower_bound(vec.begin(),vec.end(),p[u]));
					vec.erase(lower_bound(vec.begin(),vec.end(),p[p[u]]));
					i=i-1;
				}
				else{
					continue;
				}
			}
			i++;
		}
		i=0;
		while(vec.size()>2 && i<vec.size()){
			int u=vec[i];
			if(p[p[p[u]]]==u || p[p[p[u]]]==p[u]){
				continue;
			}
			else{
				if((p[p[u]]-p[u])*(p[p[u]]-u)>0){
					vec.erase(lower_bound(vec.begin(),vec.end(),p[u]));
					vec.erase(lower_bound(vec.begin(),vec.end(),p[p[u]]));
					count++;
					ans.push_back(u);ans.push_back(p[u]);ans.push_back(p[p[u]]);
					p[vec[i]]=p[p[p[u]]];
				}
				else{
					ans.push_back(u);ans.push_back(p[p[u]]);ans.push_back(p[u]);
					ans.push_back(u);ans.push_back(p[p[u]]);ans.push_back(p[u]);
					vec.erase(lower_bound(vec.begin(),vec.end(),p[u]));
					vec.erase(lower_bound(vec.begin(),vec.end(),p[p[u]]));
					count+=2;
					p[vec[i]]=p[p[p[u]]];
				}
			}
			i++;
		}
		kiran:
		i=0;
		while(vec.size()>2 && i<vec.size()){
			int u=vec[i];
					int temp,temp2;
					for(int m=vec.size()-1;m>=0;m--){
						if(vec[m]!=u && vec[m]!=p[u]){
							temp=vec[m];temp2=m;break;
						}
					}
					if((temp-u)*(temp-p[u])>0){
						count+=2;
					    ans.push_back(u);ans.push_back(p[u]);ans.push_back(temp);
					    ans.push_back(u);ans.push_back(p[u]);ans.push_back(temp);
					    vec.erase(vec.begin()+i);i=i-1;
					    p[p[u]]=p[temp];
					    p[temp]=p[u];
					}
					else{
						count++;
						ans.push_back(u);ans.push_back(temp);ans.push_back(p[u]);
						vec.erase(vec.begin()+i);i=i-1;
					    p[p[u]]=p[temp];
					    p[temp]=p[u];
					}	
			i++;
		}
		if(vec.size()==1 || vec.size()==2){
			cout<<"-1"<<"\n";
		}
		else{
			if(count<=k){
			cout<<count<<"\n";
			for(int i=0;i<ans.size();i++){
				if(i!=0 && i%3==0)
				  cout<<"\n";
				cout<<ans[i]<<" ";
			}cout<<"\n";
			}
			else{
				cout<<"-1"<<"\n";
			}
		}
		vec.clear();ans.clear();
	}
	return 0;
}

