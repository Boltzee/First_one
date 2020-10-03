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
     int a[10],b[10];
     for(int i=0;i<10;i++){
     	a[i]=i;
	 }
	 copy_n(a,10,b);
	 for(int x:b ){
	 	cout <<x<<" ";
	 }
  }
  return 0;
}

