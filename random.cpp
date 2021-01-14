#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int x) 
{ 
     // First x in the below expression is 
     // for  the case when x is 0  
     return x && (!(x & (x - 1))); 
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int T;cin>>T;
	while(T--){
	// cout<<int(pow(2,25));
	int n,m;cin>>m>>n;
    if(m>n){
		cout<<"-1\n";continue;
	}
	else if (m==n){
		string s(m,'a');
		cout<<s<<"\n";continue;
	}
	int k=m;
	std::vector<int > vec;
    char s[26];
    for(int i=0;i<26;i++){
    	s[i]='a'+i;
    }
    // for(int i=0;i<26;i++) cout<<s[i]<<" ";cout<<endl;
	while(n!=0 && m>0){
		bool ins=isPowerOfTwo(n);
		// cout<<"the given number is a power of 2 "<<ins<<"\n";
		int temp= log2(n);
		if(ins){
			n= n- pow(2,temp-1);
			vec.push_back(temp-1);
			m--;
			if(n==m){
				break;
			}
			continue;
		}
		n= n-pow(2,temp);m--;
		cout<<"the value of n and m are "<<n<<" "<<m<<"\n";
		vec.push_back(temp);
		if(n==m){
			break;
		}
		// n=n-pow(2,temp);
	}
	if(n!=m){
		cout<<"-1\n";continue;	
	}
    for(int i=0;i<n;i++) vec.push_back(0);
    // cout<<vec.size()<<"\n";
    // for(auto x:vec) cout<<x<<" ";
    string str(k,'a');
    // cout<<str.length()<<endl;
    for(int i=0;i<vec.size();i++){
    	str[i]=s[vec[i]]; 
    }
    cout<<str<<"\n";
 }
 	return 0;
}