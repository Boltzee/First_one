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
     int n;cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
     	cin>>a[i];
	 }
	 sort(a,a+n);
	 int present=1;
	 for(int i=n-1;i>=0;i--){
	 	if(present>=a[i]){
           present++;
		   }
        else if(i>=a[i]-present)
		{
          present+=a[i];
          i=i-a[i]+1;
        }
	 }
	 cout<<present<<"\n";
  }
  return 0;
}

