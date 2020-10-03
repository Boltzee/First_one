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
  int n;
  cin>>n;
  int a[n];
  long long int gcd=1,pairs=0,lcm=1;
  for(int i=0;i<n;i++){
  	cin>>a[i];
  	for(int m=i-1;m>=0;m--){
  		pairs++;
  		if(pairs==1){
  			lcm=(a[m]*a[i])/(__gcd(a[m],a[i]));
  			gcd=lcm;
		  }
		else{
			lcm=(a[m]*a[i])/(__gcd(a[m],a[i]));
			gcd=__gcd(gcd,lcm);
		}  
	  }
  }
  cout<<gcd<<"\n";
  return 0;
}

