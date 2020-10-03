#include<bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define sort_vec(a) sort(all(a))
#define sort_ar(a) sort(a,a+sizeof(a)/sizeof(a[0]));
#define uniq_arr(a,n) sort_ar(a);n=unique(a,a+n)-a;
#define uniq_vec(a)  sort_vec(a);a.resize(distance(a.begin(),unique(all(a))));
vector <int> vec[125];
int u[1000005];

int main(){
  string t;cin>>t;
  int n=t.length();
  
  string d=t;
//  string c=t;
//  uniq_vec(c);
  sort(d.begin(),d.end());
  for(int i=0;i<d.length();i++){
		int in=d[i];
		vec[in].push_back(i);
  }//cout<<"\n";
//  for(int i=0;i<c.size();i++){
//  	int it=c[i];
//  	for(int j=0;j<vec[it].size();j++){
//  		cout<<vec[it][j]<<" ";
//	  }cout<<"\n";
//  }
  
//  unordered_map <int ,int> u;
//  unordered_map
  for(int i=0;i<d.length();i++){
      char element=t[i];
      int it=t[i];
//      u[i]=i;
      u[i]= vec[it].front();
      vec[it].erase(vec[it].begin());
  }
//  unordered_map<int, int>:: iterator itr;
//  for (itr = u.begin(); itr != u.end(); itr++) 
//    { 
//        // itr works as a pointer to pair<string, double> 
//        // type itr->first stores the key part  and 
//        // itr->second stroes the value part 
//        cout << itr->first << "  " << itr->second << endl; 
//     }
  char actual[n];int j=0;
  actual[j]=d[0];j++;
  int index=u[0];
  while(j<n){
      char element=d[index];
      actual[j]=element;j++;
      index= u[index];
  }
  for(int i=j-1;i>=0;i--){
      cout<<actual[i];
  }cout<<"\n";
  return 0;
}  
