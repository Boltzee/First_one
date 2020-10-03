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
//     long long int dist1[n]={0},dist2[n]={0};
     int a[n],b[n];
     for(int i=0;i<n;i++){
     	cin>>a[i];
	 }
	 for(int i=0;i<n;i++){
	 	cin>>b[i];
//	 	if(b[i]==a[i]){
//	 		c[j]=i;
//	 		for(int m=0;m<i;m++){
//	 			dist1[j]=dist1[j]+a[m];
//			 }
//			for(int m=0;m<i;m++){
//	 			dist2[j]=dist2[j]+b[m];
//			}
//			j++;
//		 }
	 }
	 long long int d1=0,d2=0,wierd=0;
	 for(int i=0;i<n;i++){
	 	if(a[i]==b[i] && d1==d2){
	 		wierd=wierd+a[i];
		 }
		 d1=d1+a[i];d2=d2+b[i];
	 }
//	 long long int wierd=0;
//	 for(int i=0;i<j;i++){
//	 	if(dist1[i]==dist2[i]){
//	 		wierd=wierd+a[c[i]];
//		 }
//	 }
	 cout<<wierd<<"\n";
  }
  return 0;
}

