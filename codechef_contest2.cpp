#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define all(a) a.begin(),a.end()
#define uniq(a) a.resize(distance(a.begin(),unique(all(a))));
#define set_bit(n,p)  n|=1<<p;
#define unset_bit(n,p)  n&=(~(1<<p));
#define toggle(n,p) n^=(1<<p);
#define check_bit(n,p) n&(1<<p)
#define strip_last_setbit(n) n=n&(n-1);
#define lowest_set_bit(n) n&(-n)
#define lead_z(n) builtin_clz(n)
#define trail_z(n) builtin_ctz(n)
#define count_one(n) __builtin_popcount(n)
#define count_onel(n) __builtin_popcountl(n)
#define count_onell(n) __builtin_popcountll(n)
#define swapit(a,b)  a^=b;b^=a;a^=b;
#define copy(s,n,t) copy_n(s,n,t);
#define digits(n) floor(log10(n))+1;
#define sort_vec(a) sort(all(a))
#define sort_ar(a) sort(a,a+sizeof(a)/sizeof(a[0]));
#define uniq_arr(a,n) sort_ar(a);n=unique(a,a+n)-a;
#define uniq_vec(a)  sort_vec(a);a.resize(distance(a.begin(),unique(all(a))));
#define max_vec(a) *max_element(all(a))
#define min_vec(a) *min_element(all(a))
#define max_arr(a,n) *max_element(a,a+n)
#define min_arr(a,n) *min_element(a,a+n)
#define no_binary(a) {return (int)log2(a)+1;}
#define if_even(a) (!(a&1))
#define sum_vec(a,sum) accumulate(all(a),sum);
#define stop cout<<"\n";
#define show(a) for(auto kind:a){cout<<kind<<" ";}stop; 

// use atoi(),atol(),atof() to convert string to number 
// use itoa() to convert number to string 

#define vc vector<int>
#define vp vector<pair<int,int> >
#define um unordered_map<int,int> 
#define ff(a,b) for(int i=a;i<b;i++)
#define fr(a,b) for(int i=b-1;i>=a;i--)

template <typename Type>
int count(Type arr[],Type x,int n) 
{     
  Type *low = lower_bound(arr, arr+n, x); 
  if (low == (arr + n) || *low != x)                     //number of occurences function.
     return 0;      
  Type *high = upper_bound(low, arr+n, x);      
  return high - low; 
}
int countSetBits(int x) 
{ 
    int count = 0; 
    while (x) 
    { 
        x &= (x-1); 
        count++; 
    } 
    return count; 
}
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int log2(int x) 
{ 
    int res = 0; 
    while (x >>= 1) 
        res++; 
    return res; 
}
bool isPowerOfTwo(int x) 
{ 
     // First x in the below expression is 
     // for  the case when x is 0  
     return x && (!(x & (x - 1))); 
}

ll power(int a,int b){
  ll result=1;
  while(b){
      if(b%2) result= (1LL*result*a)%mod;
      a= (1LL*a*a)%mod;
      b= b/2;
  }
  return result;
}  


int main()
{
  
  fast;
  int T;
  cin>>T;
  while(T--){
      int n;cin>>n;
      string s,p;cin>>s>>p;
      int count_ones=0,count_onep=0;
      for(int i=0;i<s.length();i++){
      	if(s[i]=='1') count_ones++;
      	if(p[i]=='1') count_onep++;
      }
      if(count_ones!=count_onep){
      	cout<<"No\n";continue;
      }
      int temp1=0,temp2=0;
      for(int i=0;i<s.length();i++){
      	if(s[i]=='0' && p[i]=='1'){
      		if(temp2<=0){
      			cout<<"No\n";goto kiran;
      		}
      		else{
      			temp2--;
      		}
      	}
      	if(s[i]=='1' && p[i]=='0'){
      		temp2++;
      	}
      }
      if(temp2==0){
      	cout<<"Yes\n";
      }
      else{
      	cout<<"No\n";
      }
      kiran:;
  }
  return 0;
}
