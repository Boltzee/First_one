#include<bits/stdc++.h>
using namespace std;
int n,m;
bool visited[1003][1003];
char a[1003][1003];
int com[1003][1003];
unordered_map <int,int> um;
unordered_map <int,bool> check;

void floodfill(int i,int j,int &comp,int sub){
	if(a[i][j]=='*') return;
	if(visited[i][j]) return;
	if(i<=0 || i>=n+1 || j<=0 || j>=m+1) return;
    visited[i][j]=true;
    comp++;
    com[i][j]=sub;
   	floodfill(i+1,j,comp,sub);
	floodfill(i-1,j,comp,sub);
	floodfill(i,j+1,comp,sub);
	floodfill(i,j-1,comp,sub);
    return;
}

int main(){
	cin>>n>>m;
	for(int i=1;i<n+1;i++){
  	  for(int j=1;j<m+1;j++){
  		// value[i][j]=0;
  		cin>>a[i][j];
  		visited[i][j]=false;
  	  }
    }
    int sub=1;

  for(int i=1;i<n+1;i++){
  	for(int j=1;j<m+1;j++) {
  		int temp=0;
  		if(a[i][j]=='.' && !visited[i][j]){
          floodfill(i,j,temp,sub);
          um[sub]=temp;
          sub++;
        }
  	}
  }
  for(auto x:um){
  	// cout<<x.first<<" "<<x.second<<"\n";
  	check[x.first]=false;
  }
  for (int i = 1; i < n+1; i++)
  {
  	for(int j=1;j<m+1;j++){
  		int emp=0;
  		if(a[i][j]=='*'){
  			for(auto it=check.begin();it!=check.end();it++) {
  				it->second=false;
  			}
  			// for(auto it=check.begin();it!=check.end();it++) {
  			// 	cout<<"the value of check for sub "<<it->first<<" is "<<it->second<<"\n";
  			// }
            if(a[i+1][j]=='.' && !(i+1<=0 || i+1>=n+1 || j<=0 || j>=m+1)){
                // if(i==1 && j==5) cout<<"i am here\n";
               	if(!check[com[i+1][j]]) {
               		emp+=um[com[i+1][j]];
                    check[com[i+1][j]]=true;
                }
            }
            if(a[i-1][j]=='.' && !(i-1<=0 || i-1>=n+1 || j<=0 || j>=m+1)){
            	// if(i==1 && j==5) cout<<"i am here\n";
                if(!check[com[i-1][j]]) {                	
               		emp+=um[com[i-1][j]];
                    check[com[i-1][j]]=true;
                } 	
            }
            if(a[i][j+1]=='.' && !(i<=0 || i>=n+1 || j+1<=0 || j+1>=m+1)){
            	// if(i==1 && j==5) cout<<"i am here\n";
            	if(!check[com[i][j+1]]) {
               		emp+=um[com[i][j+1]];
                    check[com[i][j+1]]=true;
                }
            }
            if(a[i][j-1]=='.' && !(i<=0 || i>=n+1 || j-1<=0 || j-1>=m+1)){
            	// if(i==1 && j==5) cout<<"i am here\n";
            	if(!check[com[i][j-1]]) {
               		emp+=um[com[i][j-1]];
                    check[com[i][j-1]]=true;
                }
            }
            cout<<(emp+1)%10;
  		}
  		else{
  			cout<<".";
  		}
  	}
  	cout<<"\n";
  }
  return 0;
}