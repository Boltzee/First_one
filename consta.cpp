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
		string s,a;
		cin>>s;
		a=s;
		char temp;
		temp=s[0];
		s.erase(0,1);
		s.insert(s.end(),temp);
        char temp1=a[a.length()-1];
        a.erase(a.length()-1,1);
        a.insert(a.begin(),temp1);
        if(a.compare(s)==0){
        	cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}
