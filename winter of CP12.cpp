#include<iostream>
#include<string.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		string s;
		cin>>s;
//		s.erase(s.begin(),s.begin()+2);
//		cout<<s;
        int count=0;
//        while(count!=1){
//		bool ins=false;
        for(int i=0;i<s.length()-1 && s.length()!=0;i++){
        	if(s[i]=='A' && s[i+1]=='B'){
        		s.erase(s.begin()+i,s.begin()+i+2);
        		if(i!=0) i=i-2;
        		else i=i-1;	
//        		cout<<s;
			}
		}
//		if(!ins) count++;
//	    }
//	    int count2=0;
////	    cout<<s<<endl;
//	    while(count2!=1 && s.length()!=0){
//	    	bool ins=false;
//	    	for(int i=0;i<s.length()-1 && s.length()!=0;i++){
////	    		cout<<"the value of i is "<<i<<endl;
//	    		if(s[i]=='B' && s[i+1]=='B'){
//	    			s.erase(s.begin()+i,s.begin()+i+2);ins=true;i=i-1;
////	    			cout<<"the value of i after the modification is "<<i<<endl;
//				}
//			}
//			if(!ins) count2++;
//		}
		int num_b=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='B') num_b++;
		}
		
		cout<<s.length()-(num_b/2)*2<<"\n";
	}
	return 0;
}
