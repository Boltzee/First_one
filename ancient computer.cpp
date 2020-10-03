#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
    fast();
	int T;cin>>T;
	while(T--){
	    long long int a,b,j,k;
	   cin>>a>>b;
	   j=a;k=b;
	   while(j%2==0){
	   	 j=j/2;
	   }
	   while(k%2==0){
	   	 k=k/2;
	   }
	   if(k!=j){
	   	cout<<"-1\n";continue;
	   }
	   if(a==b){cout<<"0\n";continue;}
//	   while()
//	   cout<<num1<<" "<<num2;
       if(a%2!=0 && b%2!=0){
       	cout<<"-1\n";continue;
	   }
//	   if(num1==num2){
           long long int max,min,count=0;
          if(a>b){max=a;min=b;}
          else{max=b;min=a;}
          if(max%min!=0){
          	cout<<"-1\n";continue;
		  }
           long long int div=max/min;
           if(div%2!=0){
           	cout<<"-1\n";continue;
		   }
          long long int num=(int)log2(div);
		  count=count+(num/3);
		  if(num%3==1 || num%3==2) count++;          
          cout<<count<<"\n";continue;
//	   }
//	   else{
//	     cout<<"-1\n";
//	   }
	}
	return 0;
}
