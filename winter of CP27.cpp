#include<bits/stdc++.h>
using namespace std;
#define int long long int 

int power(int x,int y){
	int result=1;
	while(y){
		if(y%2) result = result* x;
		x =x * x;
		y/=2;
		
	}
	return result;
}
int32_t main(){
	int a,b;
	cin>>a>>b;
	int num_a= log2(a)+1;
	int num_b= log2(b)+1;
	int m= max(num_a,num_b);
	int k= min(num_a,num_b);
	bitset<60> num(0);num.flip();
	int count=0;
	for (int j=k;j<=m;j++){
	unsigned int constant=0;
	for (int i=0;i<j;i++){
		constant+= num[i]*power(2,i);
	}
//	cout<<"constant"<<constant<<"\n";
	
	for(int i=0;i<j-1;i++){
		int temp=constant;
		temp= temp - power(2,i);
//		cout<<temp<<"\n";
		if(temp<=b && temp>=a){
			count++;
		}
	}
    }
	cout<<count<<"\n";
//	int z= pow(2,num);
//	cout<<num<<"\n";
}
