#include<iostream>
using namespace std;
int n,m;
int value[1003][1003];
bool visited[1003][1003];
char a[1003][1003];
void floodfill(int i,int j,int &count){
	// cout<<"entered the floodfill function at "<<i<<" "<<j<<"\n";
	if(visited[i][j]) return;
    if( a[i][j]=='*'){
    	return ;
    }
    if(i<=0 || i>=n+1 || j<=0 || j>=m+1){
        return ;
    }
    else{
    	visited[i][j]=true;
    	count++;
    	floodfill(i+1,j,count);
    	floodfill(i-1,j,count);
    	floodfill(i,j+1,count);
    	floodfill(i,j-1,count);
    }
}

void clear_visited(){
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			visited[i][j]=false;
		}
	}
}

int main(){
  cin>>n>>m;
  for(int i=1;i<n+1;i++){
  	for(int j=1;j<m+1;j++){
  		value[i][j]=0;
  		cin>>a[i][j];
  		if(a[i][j]=='.') value[i][j]++;
  	}
  }
  for(int i=1;i<n+1;i++){
  	for(int j=1;j<m+1;j++) {
  		if(a[i][j]=='*'){
  		clear_visited();
  		a[i][j]='.';
        floodfill(i,j,value[i][j]);
        // if(a[i][j]=='') value[i][j]-=1;
        cout<<value[i][j]%10;
        a[i][j]='*';
        // goto kiran;
        }
        else{
        	cout<<'.';
        }  		
  	}cout<<"\n";
  }
  // kiran:;
  return 0;
}