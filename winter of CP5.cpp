#include<iostream>
using namespace std;

bool check(int a,int b){
    if(a==0 || b==0){
      return false;}
    if(a==1 && b==1){
      return false;}
    return true;
}


int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		int a,b;cin>>a>>b;
		if(a==0 || b==0){
			cout<<0<<"\n";
		}
		else{
			int ma= max(a,b);
            int mi= min(a,b);
            if(ma>=2*mi){
               cout<<mi<<"\n"; 
            }
            else{
//            	int count=0;
//              while(check(a,b)){
//              	   
//                   if(a<b){
//                      int diff= b-a;
//                      count+=diff;
//                      a-=diff;b=b-2*diff;
//                   }
//                   else if(a==b){
//                   	   count++;
//                   	   a-=1;b-=2;
//				   }
//                  else{
//                      int diff= a-b;
//                      count+=diff;
//                      a=a- 2*diff; b-=diff;
//                  }
//             }
//             cout<<count<<"\n";
               cout<<(a+b)/3<<"\n";
           }
		}
	}
	return 0;
}
