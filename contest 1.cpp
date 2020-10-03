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
     double c;cin>>c;
     double a=0,b=0;
     cout<<fixed<<setprecision(10);
     if(c==0){
     	cout<<"Y "<<a<<" "<<b<<"\n";continue;
	 }
     if(pow(c,2)<4){
     	cout<<"N\n";continue;
	 }
	 else{
	 	 long double ans1,ans2;
	 	ans1=(c+sqrt(c*c-4))/2;
	 	ans2=c/ans1;
	 	 long double check1=ans1+ans2;
	 	 long double check2=ans1*ans2;
	 	 long double check3=fabs(check1-check2);
	 	if(fabs(check1-c)<=0.000001 && check3<=0.000001){
	 	   cout<<"Y "<<ans1<<" "<<ans2<<"\n";}
	 	else{
	 		ans1=(c-sqrt(c*c-4))/2;
	 		ans2=c/ans1;
	 	     check1=ans1+ans2;
	 	     check2=ans1*ans2;
	 	     check3=fabs(check1-check2);
	 	    if(fabs(check1-c)<=0.000001 && check3<=0.000001){
	 	        cout<<"Y "<<ans1<<" "<<ans2<<"\n";}
	 	    else{
	 	    	cout<<"fN\n";continue;
			 }
		 }
	 }
  }
  return 0;
}

