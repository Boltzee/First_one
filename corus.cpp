#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,q;
		int a[26]={0};
		string s;
		cin>>n>>q;
		cin>>s;
		for(int i=0;i<s.length();i++){
			int l=s[i]-97;
			a[l]++;
		}	
		sort(a,a+26);
		for(int i=0;i<q;i++){
			int c;
			cin>>c;
			if(c>=a[25]){
				cout<<"0\n";
			}
			else{
				int sum=0,b[26];
				for(int m=0;m<26;m++){
					b[m]=a[m];
				}
				for(int i=0;i<26;i++){
					b[i]=b[i]-c;
					if(b[i]>0)
					  sum=sum+b[i];
				}
				cout<<sum<<"\n";
			}
		}
	}
	return 0;
}
