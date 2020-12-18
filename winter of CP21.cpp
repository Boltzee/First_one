#include<iostream>
using namespace std; 

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		int pos[n+1];
		for(int i=0;i<n;i++){
			int x;cin>>x;
			pos[x]=i;
		}
		char a[n+1];
		int pos_max=pos[1];
		int pos_min=pos[1];
		a[1]='1';
		for(int i=2;i<=n;i++){
			pos_max=max(pos[i],pos_max);
			pos_min=min(pos[i],pos_min);
			if(pos_max-pos_min+1==i){
				a[i]='1';
			}
			else{
				a[i]='0';
			}
		}
		for(int i=1;i<n+1;i++){
			cout<<a[i];
		}cout<<"\n";
	}
	return 0;
}
