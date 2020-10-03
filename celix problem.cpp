#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define mp make_pair
#define pb push_back
int numberOfPaths(int m, int n) 
{ 
    // We have to calculate m+n-2 C n-1 here 
    // which will be (m+n-2)! / (n-1)! (m-1)! 
    int path = 1; 
    if(m==1 || n==1) return path;
    for (int i = n; i < (m + n - 1); i++) { 
        path *= i; 
        path /= (i - n + 1); 
    } 
    return path; 
} 

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int T;
  cin>>T;
  while(T--){
    long long int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    long long int ans=numberOfPaths(abs(x1-x2)+1,abs(y1-y2)+1);
    cout<<ans<<"\n";
  }
  return 0;
}

