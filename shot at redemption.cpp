#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector <int> t;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		t.push_back(a);
	}
	kiran:
	for(int i=0;i<t.size()-1;i++){
		if(t[i]>t[i+1]){
			if(i>=(t.size()/2)-1){
				t.erase(t.begin()+t.size()/2,t.end());
				goto kiran;
			}
			else{
				t.erase(t.begin(),t.begin()+t.size()/2);
				goto kiran;
			}
		}
	}
	cout<<t.size()<<"\n";
	return 0;
}
