#include<bits/stdc++.h>
#include<sstream>
using namespace std;

// #define int long long int 

bool check_function(int n){
	std::vector<int> v;
	while(n>0){
		v.push_back(n%10);
		n= n/10;
	}
	int count_7=0,count_4=0;
	for(auto x:v){
		if(x==7) count_7++;
		if(x==4) count_4++;
	}
	if(count_4==count_7 && (count_7+count_4)==v.size()) return true;
	return false;
}

signed main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s;cin>>s;
	stringstream geek(s);
	int n;geek>>n;
	int no_of_digits= int(log10(n))+1;
	if(no_of_digits%2) {
		no_of_digits++;
		for(int i=0;i<no_of_digits/2;i++) cout<<"4";
		for(int i=0;i<no_of_digits/2;i++) cout<<"7";
		return 0;
	}
	else{
		int num_4=0,num_7=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='4') num_4++;
			if(s[i]=='7') num_7++;
		}
		if(num_4==num_7 && (num_4+num_7)==s.length()){
			cout<<n<<"\n";return 0;
		}
		else{
			if(s[0]-'0'<4){
				for(int i=0;i<no_of_digits/2;i++) cout<<"4";
				for(int i=0;i<no_of_digits/2;i++) cout<<"7";
				return 0;
			}
			string h;
			for(int i=0;i<no_of_digits/2;i++) h.push_back('7');
			for(int i=0;i<no_of_digits/2;i++) h.push_back('4');
			stringstream hello(h);
			int q; hello>>q;
			cout<<"the value of q is "<<q<<"\n";
			if(s[0]-'0'>7 || n>q){
				for(int i=0;i<no_of_digits/2+1;i++) cout<<'4';
				for(int i=0;i<no_of_digits/2+1;i++) cout<<'7';
				return 0;
			}
			for(int i=n;;i++){
				if(check_function(i)){
					cout<<i<<"\n";
					return 0;
				}
			}
		}
	}
	return 0;
}