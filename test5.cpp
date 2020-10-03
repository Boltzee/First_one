#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		string t;
		cin>>t;
		int count=0;
		for(int i=0;i<t.length();i++){
			if(t[i]=='0')
			 count++;
		}
		if(count==0){
			cout<<t<<"\n";
		}
		else if(count==t.length()){
			cout<<t<<"\n";
		}
		else{
			for(int i=0;i<2*(t.length());i++){
				if(i%2==0){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			cout<<"\n";
		}
	}
	return 0;
}
