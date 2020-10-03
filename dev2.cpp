#include<iostream>
using namespace std;
//#include<string.h>

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		char s[100001][10];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<10;j++){
				cin>>s[i][j];
			}
		}
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<10;j++){
				if(s[0][j]==s[i][j]){
					s[0][j]='0';
				}
				else{
					s[0][j]='1';
				}
			}
		}
		int count=0;
		for(int j=0;j<10;j++){
			if(s[0][j]=='1'){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
