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
     int a[n],prod[n];
     for(int i=0;i<n;i++){
     	cin>>a[i];
	 }
	 for(int i=0;i<n;i++){
	 	ll fac=1;
	 	for(int m=0;m<n;m++){
	 		if(m==i)  continue;
	 		fac=fac*a[m];
		 }
		 prod[i]=fac;
	 }
	 for(int i=0;i<n;i++){
	 	cout<<prod[i]<<" ";
	 }
  }
  return 0;
}

