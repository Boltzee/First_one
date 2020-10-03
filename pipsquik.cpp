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
     int n,h,y1,y2,l;
     cin>>n>>h>>y1>>y2>>l;
     int count=0;
     for(int i=0;i<n;i++){
     	int t,x;
     	cin>>t>>x;
//     	if(l==0) continue;
     	if(t==1){
     		int duck=h-y1;
     		if(duck<=x){
     			count++;
			 }
			 else{
			 	if(l>0)
			 	  l--;
			 	if(l>0) count++;
			 }
		 }
		 else{
		 	if(y2>=x){
		 		count++;
			 }
			 else{
			 	if(l>0)
			 	  l--;
			 	if(l>0) count++;
			 }
		 }
	 }
	 cout<<count<<"\n";
  }
  return 0;
}

