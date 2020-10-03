#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define mp make_pair
#define pb push_back


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int T;
  cin>>T;
  while(T--){
     int n;
     cin>>n;
     int a[10000]={0};
     for(int i=1;i<=n;i++){
     	cin>>a[i];
	 }
	 int ans=0;
	 for(int i=1;i<=n;i++){
	 	for(int k=1;k<=n;k++){
	 		int max=0,temp=0;
	 	    for(int m=i;m<=n;m++){
	 		if(m==i){
	 			temp=m;max++;m=m+k-1;
				 continue;
			 } 
	 		if(m%temp==0){
    	 		if(a[temp]<a[m]){
	 		      max++;
	 		      temp=m;
	 		   }
	 	    }
		 }
		  if(max>ans)
		   ans=max;
	 }
	}
	 cout<<ans<<"\n";
  }
  return 0;
}

