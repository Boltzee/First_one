#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	int a[6]={4,8,16,15,23,42};
	int count=0;
	pair<int,int> vec[1000];
	for(int i=0;i<5;i++){
		for(int j=i+1;j<6;j++){
//			count++;
//			cout<<a[i]<<" "<<a[j]<<" "<<a[i]*a[j]<<"\n";
			vec[a[i]*a[j]].first=a[i];vec[a[i]*a[j]].second=a[j];
		}
	}
	vector <int> ans1,ans2;
	int sec[4];
	string s[4]={"? 1 2","? 2 3","? 4 5","? 5 6"};
	for(int i=0;i<4;i++){
		cout<<s[i]<<endl;
		int x;
		cin>>x;
		sec[i]=x;
		if(i<2){
		ans1.push_back(vec[x].first);
		ans1.push_back(vec[x].second);}
		else{
			ans2.push_back(vec[x].first);
			ans2.push_back(vec[x].second);
		}
	}
	int ans[6];
	sort(ans1.begin(),ans1.end());
	sort(ans2.begin(),ans2.end());
	for(int i=0;i<ans1.size()-1;i++){
		if(ans1[i]==ans1[i+1]){
			ans[1]=ans1[i];
			ans[0]=sec[0]/ans[1];
			ans[2]=sec[1]/ans[1];
			break;
		}
	}
	for(int i=0;i<ans2.size()-1;i++){
		if(ans2[i]==ans2[i+1]){
			ans[4]=ans2[i];
			ans[3]=sec[2]/ans[4];
			ans[5]=sec[3]/ans[4];
			break;
		}
	}
	cout<<"! ";
	for(int i=0;i<6;i++) cout<<ans[i]<<" ";
	cout<<endl;
//	cout<<count<<"\n";
	return 0;
}
