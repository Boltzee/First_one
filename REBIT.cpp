#include<iostream>
#include<string.h>
#define r  998244353
#define mod(i) (i%r)
using namespace std;

int occurences(string a,char b)
{
	int num=0;
	for(int i=0;i<a.length();i++){
		if(a[i]==b)
		  num++;
	}
	return num;
}
int modinverse(int a, int m,int num) 
{ 
    int m0 = m; 
    int y = 0, x = 1; 
    if (m == 1) 
      return 0; 
    while (a > 1) 
    { 
        int q = a / m; 
        int t = m; 
        m = a % m, a = t; 
        t = y; 
        y = x - q * y; 
        x = t; 
    } 
    if (x < 0) 
       x += m0; 
    num=num%m0;
    x=(x*num)%m0;
    return x; 
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		string l;
		cin>>l;
		int x=occurences(l,'#');
		
	}
	return 0;
}
