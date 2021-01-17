#include<iostream>
#include<vector>
using namespace std;

#define endl "\n";

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n,m;cin>>n>>m;
	vector <vector<int> > vec(m,vector<int> (3));
	for(int i=0;i<m;i++){
		for (int j = 0; j < 3; ++j)
		{
			cin>>vec[i][j];
		}
	}
	int ans_colors[n+1]={0};
	for(int i=0;i<m;i++){
		int present= 1;
		int index=0;
		for(int j=0;j<3;j++){
			if(ans_colors[vec[i][j]]!=0){
				present= vec[i][j];
				index= j;
			}
		}
		// if(i==0) {cout<<present<<" "<<index<<"\n";}
		int temp=6-present;
		for(int j=0;j<3;j++) if( j!=index){
			ans_colors[vec[i][j]]= (temp%3==0) ? 3:temp%3 ;
			// cout<<ans_colors[vec[i][j]]<<" ";
			temp= temp- ans_colors[vec[i][j]];
		}cout<<"\n";
		ans_colors[vec[i][index]]= present;
		// for(int j=0;j<3;j++){
		// 	cout<<ans_colors[vec[i][j]]<<" ";
		// }cout<<"\n";
	}
	for(int i=1;i<n+1;i++){
		cout<<ans_colors[i]<<" ";
	}cout<<"\n";
	return 0;
}