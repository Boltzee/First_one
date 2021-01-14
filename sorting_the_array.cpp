#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
	int n;cin>>n;
	int a[n];
	bool ins2=true,ins3=true;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i!=0 && a[i]>a[i-1] && ins3){
			ins3=true;
		}
		else if(i!=0 && a[i]<a[i-1]){
			ins3= false;
		}
		if(i!=0 && a[i]>a[i-1] && ins2){
			ins2=false;
		}
	}
	if(ins3){
		cout<<"yes\n";
		cout<<"1 1\n";return 0;
	}
	if(ins2){
		cout<<"yes\n";
		cout<<"1 "<<n<<"\n";return 0;
	} 
	bool ins = false;int trans=0;
    for(int i=1;i<n;i++){
    	if(a[i-1]>a[i]){
    		if(!ins) {
    			ins= true;
    			trans++;
    		}
    	}
    	else if (a[i-1]<a[i]){
    		ins=false;
    	}
    }
    if(trans ==1 ){
    	int begin=-1,end=-1;
    	int ins4=false;
		for(int i=1;i<n;i++){
			if(a[i-1]>a[i] && !ins4){
				begin=i-1;ins4=true;
			}
			else if (a[i-1]<a[i] && begin!=-1){
				end=i-1;break;
			}
		}
		if(end==-1) end=n-1;
		// cout<<"the value of begin is "<<begin<<" and the value of end is "<<end<<"\n";
		if((a[begin]>a[end+1] && (end+1)<n) || (a[end]<a[begin-1] && begin-1>=0)){
			cout<<"no\n";return 0;
		}
		else{
			cout<<"yes\n";
			cout<<begin+1<<" "<<end+1<<"\n";
			return 0;
		}
    }
    else {
    	cout<<"no";cout<<endl; return 0;
    }

}