#include<iostream>
using namespace std;
bool check(int x,int y,int z,int ar[][12])
{
  for(int i=0;i<z;i++){
   if(ar[x][i]==1 || ar[i][y]==1)
      return true;
   }
  for(int i=0;i<z;i++){
  	for(int j=0;j<z;j++){
  		if(i+j==x+y)
  		  if(ar[i][j]==1) return true;
  		if(i-j==x-y)
  		  if(ar[i][j]==1) return true;
	  }
  }
  return false;
}

bool nqueen(int q,int bo[][12],int n);
 
int main(){
  int z;
 cin>>z;
 int board[z][12]={0};
 if(nqueen(z,board,z)){
 	cout<<"YES\n";
  for(int i=0;i<z;i++){
  	for(int m=0;m<z;m++){
  		cout<<board[i][m]<<" ";
	  }cout<<"\n";
  }
 }
 else
   cout<<"NO";
 return 0;
}

bool nqueen(int q,int bo[][12],int n)
{
  if(n==0)
    return true;
  else{
   for(int i=0;i<q;i++){
     for(int j=0;j<q;j++){
      if(check(i,j,q,bo))
         continue;
      bo[i][j]=1;
      if(nqueen(q,bo,n-1)) return true;
      bo[i][j]=0;
    }
   }
  } 
  return false;
}
 	
