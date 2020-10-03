#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define mp make_pair
#define pb push_back
//int a[10];
int binarysearch(int low,int high,int key,int a[])
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;                //key not found
 }

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int T;
  cin>>T;
  while(T--){
  	int ar[10];
    for(int i=0;i<10;i++){
    	ar[i]=i;
	}
	if(binarysearch(0,9,0,ar)==-1) cout<<"not found";
	else cout<<binarysearch(0,9,0,ar);
  }
  return 0;
}

