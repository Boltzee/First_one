#include<iostream>
#include<string.h>

using namespace std;

void pushx(string& s)
{
	int i=s.length()-1,count=0;
	while(i>=0){
		if(s[i]=='x'){
			count++;
			s.erase(i,1);
		}
		i--;
	}
	string d="x";
	for(i=0;i<count;i++){
		s.insert(s.length(),d);
	}
}
int main()
{
	string a;
	getline(cin,a);
	pushx(a);
	cout<<a;
	return 0;
}
