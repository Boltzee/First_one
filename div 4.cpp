#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
        int num;
		cin>>num;
        int ans[10],j=1,k=10,i=0,count=0;
		while(num>0){
			ans[i]=(num%k);
			num=num-ans[i];
			if(ans[i]!=0)
			   count++;
			k=k*10;
			i++;
		} 
		cout<<count<<"\n";
		for(int m=0;m<i;m++){
			if(ans[m]!=0)
			   cout<<ans[m]<<" ";
		}cout<<"\n";
	}
}
