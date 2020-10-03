#include<bits/stdc++.h>
using namespace std;

vector <int> vec,ans;
int n;
bool check(int r,int index, int arr[]){
	int q=index;
	arr[arr[r]]=arr[q];
	arr[q]=arr[r];
	if(arr[arr[arr[q]]]==q){
	  return true;}
	else{
	  arr[q]=arr[arr[r]];
	  arr[arr[r]]=q;
	  return false;}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;cin>>T;
	while(T--){
		int k;cin>>n>>k;
		int p[n+1],count=0,j=0;
		for(int i=1;i<=n;i++){
			cin>>p[i];
			if(i!=p[i]){
				vec.push_back(i);
			}
		}
		int i=0;
		while(vec.size()>2){
			int u=vec[i];
			if(p[p[p[u]]]==u || p[p[p[u]]]==p[u]){
				if((p[p[u]]-p[u])*(p[p[u]]-u)>0){
					count++;
					ans.push_back(u);ans.push_back(p[u]);ans.push_back(p[p[u]]);
					vec.erase(vec.begin()+i);
					vec.erase(lower_bound(vec.begin(),vec.end(),p[u]));
					vec.erase(lower_bound(vec.begin(),vec.end(),p[p[u]]));
				}
				else if((p[p[u]]-p[u])*(p[p[u]]-u)<0){
					count+=2;
					ans.push_back(u);ans.push_back(p[p[u]]);ans.push_back(p[u]);
					ans.push_back(u);ans.push_back(p[p[u]]);ans.push_back(p[u]);
					vec.erase(vec.begin()+i);
					vec.erase(lower_bound(vec.begin(),vec.end(),p[u]));
					vec.erase(lower_bound(vec.begin(),vec.end(),p[p[u]]));
				}
				else{
					int temp,temp2,count1=0;
					for(int m=vec.size()-1;m>=0;m--){
						if(vec[m]!=u && vec[m]!=p[u]){
							count1++;
							if(check(u,vec[m],p)==true){
							  temp=vec[m];temp2=m;
							  break;
						    }
							if(count1==1)
							  temp=vec[m];
						}
					}
					if((temp-u)*(temp-p[u])>0){
						count+=2;
					    ans.push_back(u);ans.push_back(p[u]);ans.push_back(temp);
					    ans.push_back(u);ans.push_back(p[u]);ans.push_back(temp);
					    vec.erase(vec.begin()+i);
					}
					else{
						count++;
						ans.push_back(u);ans.push_back(temp);ans.push_back(p[u]);
						vec.erase(vec.begin()+i);
					}	
				}
//				for(int i=1;i<n+1;i++){
//					cout<<p[i]<<" ";
//				}cout<<"\n";
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

