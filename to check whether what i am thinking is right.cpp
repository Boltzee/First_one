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
  int T;
  cin>>T;
  while(T--){
     int a[10];
     for(int i=0;i<10;i++) a[i]=i%5;
     sort(a,a+10);
     int *t=unique(a,a+10);
     cout<<t-a<<"\n";
     for(int* it=a;it!=t;it++){
     	cout<<*it<<" ";
	 }
  }
  return 0;
}

