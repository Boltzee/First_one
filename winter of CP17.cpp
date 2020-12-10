#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int nop=0;
//		vector <pair<int,int> > vec;
		pair <int,int> temp;
		int num=0;
		bool prev=false;
		temp.first=0;
		temp.second=-1;
		for(int i=1;i<k-1;i++){
			if(a[i]>a[i-1] && a[i]>a[i+1]){
				num++;
				if(i==1) prev=true;
			}
		}
		temp.second=num;
		int last=k-1;
		int temp_prev=temp.second;
//		cout<<temp.second<<"\n";
//		cout<<prev<<"\n";
		for(int i=2;i<=n-k+1;i++){
			int temp_count=temp_prev;
			if(a[last]>a[last-1] && a[last]>a[last+1]){
				temp_count++;
			}
			last++;
//			if(i==3) {
////				cout<<temp_count<<"\n";
//				cout<<last<<"\n";
//			}
			if(prev) temp_count--;
//			cout<<temp_count<<"\n";
			if(a[i]>a[i-1] && a[i]>a[i+1]) prev=true;
			else prev=false;
			temp_prev=temp_count;
			if(temp_count>temp.second){
				temp.first=i-1;
				temp.second=temp_count;
			}
		}
		cout<<temp.second+1<<" "<<temp.first+1<<"\n";
	}
	return 0;
}
