#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
    int T;cin>>T;
    while(T--){
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        int sum=0;
        sum=a+b+c+d+e;
        sum=sum*f;
        if(sum>120) 
		  {cout<<"Yes\n";}
        else 
		  {cout<<"No\n";}
    }
    return 0;
}
