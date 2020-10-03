#include<iostream>
#include<string.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define mp make_pair
#define pb push_back


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int T;
  cin>>T;
  while(T--){
      string s;
      cin>>s;
      int num=(s.length()/2)-1;
      int i=1,count=0;
      while(i<=num){
      	string a,b,c,d;
      	int fir=i,sec=2*i,thr=2*i+(s.length()-2*i)/2;
      	int m,j=0;
      	if(s[0]!=s[i] || s[2*i]!=s[thr])
      	    goto kiran;
//      	int m,j=0;
//      	for(m=0;m<i;m++){
      		a=s.substr(0,i);
//		  }
//		for(m=fir;m<sec;m++){
			b=s.substr(i,i);
//		}
		j=0;
////		for(m=sec;m<thr;m++){
			c=s.substr(sec,(s.length()-2*i)/2);j++;
//		}
		j=0;
//		for(m=thr;m<s.length();m++){
			d=s.substr(thr,(s.length()-2*i)/2);j++;
//		}
		if(a==b && c==d){
			count++;
		}
		kiran:
		  i++;
	  }
	  cout<<count<<"\n";
  }
  return 0;
}

