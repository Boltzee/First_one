#include<iostream>

using namespace std;
typedef long long int lld;
int main()
{
  long long int a,b,k,m,e,r;
  cin>>k>>a>>b;
  if(a>0){
  	if(k<a){
  		if(a%k!=0) 
  		 a=a-(a%k)+k;
	}
	else if(a==0){
		a=0;
	}
	else{
		a=k;
	}	
  }
  else{
  	m=-1*k;
  	if(m>a){
  	  	lld j;
  	  	j=a%m;
  	  	a=a-j;
	}
  }
  if(b>0){
  	lld f;
  	f=b%k;
  	b=b-f;
  }
  else if(b==0){
  	b=0;
  }
  else{
  	m=-1*k;
  	if(m>b){
  		if(b%m!=0)
  		  b=b-b%m+m;
	  }
	else{
		b=m;
	}
  }
  e=a/k;
  r=b/k;
  cout<<r-e+1;
  return 0;
}
