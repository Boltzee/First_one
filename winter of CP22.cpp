#include<iostream>
#include<iomanip>
#include<math.h>
#include<string.h>
using namespace std;
char dez[12],dore[12];
int intented_pos=0;
int size;
int final_pos=0;
int temp=0;
int count=0;


int combinations(int n,int r){
    int fact_n=1;
    for(int i=1;i<=n;i++) fact_n*=i;
    int fact_r=1;
    for(int i=1;i<=r;i++) fact_r*=i;
    int fact_nr=1;
    for(int i=1;i<=n-r;i++) fact_nr*=i;
    return (fact_n)/((fact_r)*(fact_nr));
}

int main(){
	cout<<fixed<<setprecision(12);
	string dez1,dore1;
	cin>>dez1;
	size=dez1.length();
	cin>>dore1;
	for(int i=0;i<size;i++){
		dez[i]=dez1[i];dore[i]=dore1[i];
	}
//	dez=dez1;dore=dore1;
	int unknown=0;
    for(int i=0;i<size;i++){
	if(dez[i]=='+') intented_pos++;
	else intented_pos--;
	if(dore[i]=='+') final_pos++;
	else if(dore[i]=='-') final_pos--;
	else unknown++;
    }
    if(intented_pos==final_pos && unknown==0){
    	cout<<"1.000000000000\n";return 0;
	}
//	cout<<unknown<<"\n";
    for(int i=0;i<=unknown;i++){
    int comb= combinations(unknown,i);
//    cout<<"the value of combination at i "<<i<<" is "<<comb<<"\n";
    int temp=final_pos;
    temp= temp+ i*1;
    temp= temp- (unknown-i)*1;
    if(temp==intented_pos) count+=comb;
    }
//    cout<<"the value of count is "<<count<<"\n";
    float total= pow(2,unknown);
    float ans= count/total;
    cout<<ans<<"\n";
    return 0;
}
