#include<iostream>
using namespace std;

#define check(a) if(a=='E'){ _Exit(0);}
#define check2(b,c) if(b>=c){break;}

int main(){
	long long int n;
	long long int first,last;
	char resp;
	cin>>n;
	first=1;last=n;
	while(true){
	   cout<<last<<endl;
	   cin>>resp;
	   check(resp);
	   if(resp=='L'){
	     kiran3:
	     check2(first,last);
	     last--;
	     cout<<last<<endl;
	     cin>>resp;
	     check(resp);
	     if(resp=='G'){
             goto kiran;
	     }
	     else{
	        goto kiran3;
	     }
	   }
	   else{
	     kiran:
	     check2(first,last);
	     long long int mid=(first+last)/2;
	     cout<<mid<<endl;
	     cin>>resp;
	     check(resp);
	     if(resp=='G'){
	       first=mid+1;
	       cout<<first<<endl;
	       cin>>resp;
	       check(resp);
	       if(resp=='G'){
	         kiran2:
	         check2(first,last);
	         first++;
	         cout<<first<<endl;
	         cin>>resp;
	         if(resp=='G') goto kiran2;
	         else goto kiran;
	       }
	     }
	     else{
	       last=mid-1;
	       cout<<last<<endl;
	       cin>>resp;check(resp);
	       if(resp=='L'){
              goto kiran3;
	       }
	       else{
	          goto kiran;
	       }
	     }
	   }
	}
	cout<<first<<endl;
	cin>>resp;
	check(resp);
	return 0;
}
