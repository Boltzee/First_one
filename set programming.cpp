#include<iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{
  fast;
  int T;
  scanf("%d",&T);
  while(T--){
      int n,p,x;
      int matrix[n+2][n+2]={0};
      cin>>n>>p;
      for(int i=1;i<=n;i++){
      	  int temp=0;
          for(int m=1;m<=n;m++){
          	cout<<"1 "<<i<<" "<<m<<" "<<i<<" "<<m<<endl;
            cin>>x;
            if(x==1){
                matrix[i][m]=1;
            }
            else if(x==-1){
            	_Exit(10);
			}
          }
      }
      cout<<"2"<<endl;
      for(int i=1;i<=n;i++){
      	for(int j=1;j<=n;j++){
      		cout<<matrix[i][j]<<" ";
      	}cout<<endl;
      }
      int verdict;
      cin>>verdict;
      if(verdict==1){
      	continue;
      }
      else{
      	_Exit(10);
      }
  }
   return 0;
}
