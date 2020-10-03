#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
	int k;
	cin>>k;
	string s;
	cin>>s;
	unordered_map<char, bool> map;
	for(int i=0;i<s.size();i++)
	{
		map[ s[i] ]=true;
	} 
	if(map.size()>=k)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO";
		return 0;
	}
	unordered_map<char, bool> map1;
	int count =0;
	map1[ s[0] ]=true;
	for(int i=0;i<s.size();i++)
	{
	     cout<<s[i];
	    if(map1.count( s[i+1] )==0 && count<k-1)
	    {
	        cout<<endl;
	        count++;
	        map1[ s[i+1] ]=true;
	    }
	}
}

