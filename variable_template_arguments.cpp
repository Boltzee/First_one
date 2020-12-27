#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int64_t MX = 3e18;

int32_t main(){
	  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	  int n;
	  cin>>n;
	  vector<string> s(n+1);
	  vector<int> c(n+1);
	  vector<vector<int>> vec(n+1,vector<int>(2,0));
	  
	  for(int i=1;i<n+1;i++)cin>>c[i];
	  for(int i=1;i<n+1;i++)cin>>s[i];
	  
	  vec[1][0]=0;
	  vec[1][1]=c[1];
	  for(int i=2;i<n+1;i++)
	  {
	   string prev1=s[i-1];
	   string prev2=s[i-1];
	   reverse(prev2.begin(),prev2.end());
	   string cur1=s[i];
	   string cur2=s[i];
	   reverse(cur2.begin(),cur2.end());
	   vec[i][0]=vec[i][1]=MX;
	   if(cur1>=prev1)
	   vec[i][0]=min(vec[i][0],vec[i-1][0]);
	   if(cur1>=prev2)
	   vec[i][0]=min(vec[i][0],vec[i-1][1]);
	   if(cur2>=prev1)
	   vec[i][1]=min(vec[i][1],c[i]+vec[i-1][0]);
	   if(cur2>=prev2)
	   vec[i][1]=min(vec[i][1],c[i]+vec[i-1][1]);
	   if(vec[i][0]==MX && vec[i][1]==MX)
	   {
	        cout<<-1<<endl;
	        return 0;
	   }
	  }
	  cout<<min(vec[n][0],vec[n][1])<<endl;
	  return 0;
}