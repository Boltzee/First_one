#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007

#define int long long int

int32_t main()
{
  
  fast;
  int T;
  cin>>T;
  while(T--){
      int n,x; 
      cin>>n>>x;
      int a[n];
      int max=0;int sum=0;
      for(int i=0;i<n;i++){
      	cin>>a[i];sum+=a[i];
      	max+= (a[i]%x==0) ? (a[i]/x) : (a[i]/x)+1;
      } 
      int min= (sum%x==0) ? (sum/x) : (sum/x) +1;
      cout<<min<<" "<<max<<"\n";
  }
  return 0;
}
