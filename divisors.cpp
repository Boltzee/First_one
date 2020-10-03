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
     ll n,k,i;
     cin>>n>>k;
     int fac;
     	bool prime=true;
     	if(k>0){
     	for( i=2;i<=sqrt(n);i++){
     		if(n%i==0){
     			prime=false;
     			fac=i;
     			break;
			}
		}
		if(prime){
		 	n=n+n;k--;
		 	n=n+2*k;goto ans;
		}
		else{
		 	n=n+(fac)+2*(k-1);goto ans;
		}
	}
	ans:
	 cout<<n<<"\n";
  }
  return 0;
}

