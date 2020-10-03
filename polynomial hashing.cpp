#include<bits/stdc++.h>
using namespace std;
#define p 1000000007
int x =263;
#define all(a) a.begin(),a.end()
int m;

long long int power(long long int a,int b){
	long long int result=1;
	while(b>0){
		if(b&1) result=(result*a)%p;
		a=(a*a)%p;
	    b/=2;
	}
	return result;
}

int hashfunction(string s){
	int asc;int i=0;
	long long int value=0;
	while(s[i]){
        asc=s[i];
//        cout<<s[i]<<" "<<asc<<"\n";
        value=(value+(((asc)*(power(x,i)%p))%p))%p;
        i++;
	}
//	cout<<value<<"\n";
	value=value%p;
	value=value%m;
	return value;
}



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin>>m;
	int n;cin>>n;
	vector <string> vec[m];
	for(int h=0;h<n;h++){
	   string a;cin>>a;
	   string c;
	   if(a=="add"){
           cin>>c;
           int b=hashfunction(c);
//           cout<<"the hash value is "<<b<<"\n";
           auto it=find(all(vec[b]),c);
           if(it==vec[b].end()) vec[b].push_back(c);
	   }
	   else if(a=="del"){
           cin>>c;
           int b=hashfunction(c);
           auto it=find(all(vec[b]),c);
           if(!vec[b].empty() && it!=vec[b].end()){
               vec[b].erase(it);
           }
	   }
	   else if(a=="find"){
           cin>>c;
           int b=hashfunction(c);
//           cout<<b<<"\n";
           auto it=find(all(vec[b]),c);
           if(!vec[b].empty() && it!=vec[b].end()){
               cout<<"yes\n";
           }
           else{
               cout<<"no\n";
           }
	   }
	   else{
	       int index;cin>>index;
           if(!vec[index].empty()){
              for(int i=vec[index].size()-1;i>=0;i--){
                 cout<<vec[index][i]<<" ";
              }cout<<"\n";
           }
           else{
              cout<<"\n";
           }
	   }
	}
	return 0;
}
