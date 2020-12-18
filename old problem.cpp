#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int max=1;
	int ans[n+1];
	for(int i=2;i<n+1;i++){
		int x,y;
		cout<<"? "<<i<<" "<<max<<endl;
		cin>>x;
		cout<<"? "<<max<<" "<<i<<endl;
		cin>>y;
		if(x>y){
			ans[i]=x;
		}
		else{
			ans[max]=y;
			max=i;
		}
	}
	ans[max]=n;
	cout<<"! ";
	for(int i=1;i<n+1;i++) cout<<ans[i]<<" ";
}
