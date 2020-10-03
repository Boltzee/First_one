#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
       int h,c,t;
       cin>>h>>c>>t;
       float h0=h,c0=c,t0=t;
       if(t==h){
         cout<<"1\n";
       }
       else if((h0+c0)*(1.0)/2==t0){
         cout<<(h+c)/t<<"\n";
       }
       else{
//         float h0=h,c0=c,t0=t;
         if(t0<(h0+c0)*(1.0)/2){
         	cout<<"2\n";
		 }
		 else{
         int n=(h-t)/(2*t-c-h);
         int m=(int)n+1;
         float ans1=((n+1)*h0+n*c0)/(2*n+1);
         float ans2=((m+1)*h0+m*c0)/(2*m+1);
         if(fabs(t0-ans1)<=fabs(t0-ans2))  cout<<2*n+1<<"\n";
         else cout<<2*m+1<<"\n";
        }
       }
	}
	return 0;
}
