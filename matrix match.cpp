#include<iostream>
using namespace std;
//typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);


int main()
{
  fast;
  int T;
  scanf("%d",&T);
  while(T--){
      int n,p,x;
      int matrix[61][61];
    //   cin>>n>>p;
      scanf("%d %d",&n,&p);
    //   initialize();
      for(int i=1;i<=n;i++){
      	  int temp=0;
          for(int m=1;m<=n;m++){
        //   	cout<<"1 "<<i<<" "<<m<<" "<<i<<" "<<n;
          	printf("1 %d %d %d %d",i,m,i,m);
          	fflush(stdout);
            // cin>>x;
            scanf("%d",&x);
            if(x==1){
                matrix[i][m]=1;
            }
            else if(x==-1){
            	_Exit(10);
			}
            else{
                matrix[i][m]=0;
            }
          }
      }
      printf("2\n");
      fflush(stdout);
      for(int i=1;i<=n;i++){
      	for(int j=1;j<=n;j++){
      		// cout<<matrix[i][j]<<" ";
      		printf("%d ",matrix[i][j]);
      		fflush(stdout);
      	}printf("\n");fflush(stdout);
      }
      int verdict;
    //   cin>>verdict;
      scanf("%d",&verdict);
      if(verdict==1){
      	continue;
      }
      else{
      	_Exit(10);;
      }
  }
//  cout<<endl;
   return 0;
}
