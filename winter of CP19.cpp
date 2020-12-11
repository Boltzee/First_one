#include<iostream>
using namespace std;
#define int unsigned long long int
int32_t main(){
//    int T;cin>>T;
//    while(T--){
       int n;cin>>n;
       if(n==1) cout<<"1\n";
       else if(n==2) cout<<"2\n";
       else if(n==3) cout<<"6\n";
       else{
           if(n%2!=0){
               cout<<n*(n-1)*(n-2)<<"\n";
           }
           else{
           	   if(n%3==0) cout<<(n-1)*(n-2)*(n-3)<<"\n";
           	   else cout<<n*(n-1)*(n-3)<<"\n";
           }
       }
//    }
    return 0;
}
