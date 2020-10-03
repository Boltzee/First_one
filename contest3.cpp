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
  long long int n,k;
  cin>>n>>k;
  if(k>n){
  	cout<<k+n<<"\n";return 0;
  }
  long long int largest;
  for(int i=n/2;i>0;i--){
  	if(n%i==0){
  		largest=i;break;
	  }
  }
  bool present=false;
  int ans;
  long long int upper=largest*k;
  for(int i=k+1;i<=upper+k;i++){
  	long long int a=i/k,b=i%k;
  	if(a*b==n){
  		present=true;ans=i;
  		break;
	  }
  }
  if(present==false){
  	long long int a=n/k,b(k-(n/k));
  	if(a*b==n){
  		present=true;ans=n;
	  }
  }
  if(present==true){
  	cout<<ans<<"\n";
  }
  return 0;
}

