#include<iostream>
#include<utility>
using namespace std;


int function(long long int &k){
	int count=0;
	while(k%6==0){
		count++;
		k=k/6;
	}
	return count;
}

void function2(long long int &i, pair<bool,int> &p){
	int count2=0;
	while(i%3==0){
		count2++;
		i=i/3;
	}
	if(i==1){
		p.first=true;p.second=count2;
	}
	else{
		p.first=false;p.second=0;
	}
	return;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;cin>>T;
	while(T--){
		long long int n;cin>>n;
		if(n==1){
			cout<<"0\n";
		}
		else if(n%3!=0){
			cout<<"-1\n";
		}
		else{
			pair<bool,int> p;
            int count=0;
			count+=function(n);
			function2(n,p);
		    if(p.first){
		    	count+=(2*p.second);
		    	cout<<count<<"\n";
			}
			else{
				cout<<"-1\n";
			}					
		}
	}
	return 0;
}
