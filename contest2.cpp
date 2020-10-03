#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define all(a) a.begin(),a.end()
#define uniq(a) a.resize(distance(a.begin(),unique(all(a))));


int main()
{
  fast;
  long long int n,k;cin>>n>>k;
  if(k>2*n-1){
  	cout<<"0\n";
  }
  else if( k>1 && n==1) cout<<"0\n";
  else{
  	if(k<=n){
  		if(k%2==0){
  			cout<<k/2-1<<"\n";
		  }
		else{
			cout<<k/2<<"\n";
		}
	  }
	else{
		if(k%2==0){
			long long int a=k-n,b=k/2;
			cout<<b-a<<"\n";
		}
		else{
			long long int a=k-n,b=k/2;
			cout<<b-a+1<<"\n";
		}
	}
  }
}

