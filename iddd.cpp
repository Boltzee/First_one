#include<iostream>
#include<cstring>
using namespace std;


int main(){
	
	string a;
	getline(cin,a);
	int j=a.length();
	char k[j];
	int i=0,l=0;
	while(a[i]!='\0'){
		if(a[i]>='A' && a[i]<='Z'){
			k[l]=a[i];l++;
		}
		else if(a[i]>='a' && a[i]<='z'){
			k[l]=a[i];l++;
		}
		i++;
	}
	for(int i=0;i<l;i++) cout<<k[i];
	return 0;
}
