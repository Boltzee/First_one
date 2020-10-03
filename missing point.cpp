#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define all(a) a.begin(),a.end()
#define uniq(a) a.resize(distance(a.begin(),unique(all(a))));

int count(long long int arr[],long long int x,long long int n) 
{     
  /* get the index of first occurrence of x */
  long long int *low = lower_bound(arr, arr+n, x); 
//  cout<<"lower bound="<<low;
  // If element is not present, return 0 
  if (low == (arr + n) || *low != x) 
     return 0; 
     
  /* Else get the index of last occurrence of x. 
     Note that we  are only looking in the  
     subarray after first occurrence */   
  long long int *high = upper_bound(low, arr+n, x);      
//     cout<<"function="<<high-low<<"\n";
  /* return count */
  return high - low; 
} 

int main()
{
  fast;
  int T;
  cin>>T;
  while(T--){
     int n;cin>>n;
     long long int given=(4*n)-1;
//     cout<<given<<"\n";
     long long int arr_x[given],arr_y[given];
     set <long long int> x,y;
     for(int i=0;i<given;i++){
     	cin>>arr_x[i]>>arr_y[i];
     	x.insert(arr_x[i]);y.insert(arr_y[i]);
	 }//cout<<"arr x\n";
//	 for(int i=0;i<given;i++){
//	 	cout<<arr_x[i]<<" ";
//	 }
//	 cout<<"\narr y\n";
//	 for(int i=0;i<given;i++){
//	 	cout<<arr_y[i]<<" ";
//	 }cout<<"\n";
	 long long int ans_x,ans_y;
	 sort(arr_x,arr_x+given);sort(arr_y,arr_y+given);
	 for(auto it=x.begin();it!=x.end();it++){
	     	int num=count(arr_x,*it,given);
//	     	cout<<"x-"<<*it<<" "<<num<<"\n";
	     	if(num%2==1){
	     	    ans_x=*it;	
			 }
	 }
//	 cout<<"arr x\n";
//	 for(int i=0;i<given;i++){
//	 	cout<<arr_x[i]<<" ";
//	 }
//	 cout<<"\narr y\n";
//	 for(int i=0;i<given;i++){
//	 	cout<<arr_y[i]<<" ";
//	 }cout<<"\n";
	 for(auto it=y.begin();it!=y.end();it++){
	 	int num=count(arr_y,*it,given);
//	 	cout<<"y-"<<*it<<" "<<num<<"\n";
	 	if(num%2==1){
	 		ans_y=*it;
		 }
	 }
	 cout<<ans_x<<" "<<ans_y<<"\n";
  }
  return 0;
}

