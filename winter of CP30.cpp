#include<iostream>
#include<math.h>
#include<vector>
#include<utility>
using namespace std;

vector <pair<int,int> > vec[2501];
bool visited[50][50];
int subgroup[50][50];
int a[50][50];
int n;
void expand(int i,int j,int subgroup_num){
	if(i<0 || j<0 || i>=n || j>=n){
		return;
	}
	if(visited[i][j]){
		return;
	}
	if(a[i][j]==0){
		return;
	}
	visited[i][j]=true;
	subgroup[i][j]=subgroup_num;
	vec[subgroup_num].push_back(make_pair(i,j));
	expand(i+1,j,subgroup_num);
	expand(i-1,j,subgroup_num);
	expand(i,j+1,subgroup_num);
	expand(i,j-1,subgroup_num);
	return;
}

int main(){
	cin>>n;
	
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			visited[i][j]=false;
		} 
	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++) cout<<visited[i][j]<<" ";
//		cout<<"\n";
//	}
	int r_one,c_one,r_two,c_two;
	cin>>r_one>>c_one;
	cin>>r_two>>c_two;
	r_one-=1;c_one-=1;r_two-=1;c_two-=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char x;cin>>x;
		    int y=x-48;
		    a[i][j]=1-y;
		}
	}
//	cout<<"the graph is \n";
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			cout<<a[i][j]<<" ";
//		} cout<<"\n";
//	}
	int subgroup_num=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(!visited[i][j] && a[i][j]==1){
//				cout<<"entering at "<<i<<" "<<j<<"\n";
				subgroup[i][j]=subgroup_num;
				vec[subgroup_num].push_back(make_pair(i,j));
				expand(i,j,subgroup_num);
				subgroup_num++;
			}
			
		}
	}
//	cout<<subgroup_num<<"\n";
	if(subgroup[r_one][c_one]==subgroup[r_two][c_two]){
		cout<<"0\n";return 0;
	}
	else{
		int first= subgroup[r_one][c_one];
		int second= subgroup[r_two][c_two];
//		cout<<"first"<<first<<"second"<<second<<"\n";
		int temp= INT_MAX;
		for(int i=0;i<vec[first].size();i++){
			int first_i=vec[first][i].first,first_j= vec[first][i].second;
//			cout<<first_i<<" "<<first_j<<"the first point\n";
			for(int j=0;j<vec[second].size();j++){
				int second_i=vec[second][j].first,second_j= vec[second][j].second;
//				cout<<second_i<<" "<<second_j<<"the second point\n";
				int dist= pow(first_i-second_i,2)+ pow(second_j-first_j,2);
//				cout<<"the distance is "<<dist<<"\n";
				if(dist<temp){
					temp=dist;
				}
			}
		}
		cout<<temp<<"\n";
	}
	return 0;
}
