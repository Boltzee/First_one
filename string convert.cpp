#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
	  int n;
	  cin>>n;
	  string a,b;
	  cin>>a>>b;
	  bool instinct=false;
	  bool visiteda[26]={false},visitedb[26]={false};
	  unordered_set<int> positions[26];
	  vector <pair<int,unordered_set<int> > > ans;
//	  for(int i=0;i<a.length();i++){
//	  	cout<<a[i]<<" ";
//	  }
	  for(int i=0;i<a.length();i++){
	     if(a[i]<b[i]){instinct=true;break;}
	     visitedb[b[i]-97]=true;
	     visiteda[a[i]-97]=true;
	     positions[b[i]-97].insert(i); 
	  }
//	  if(instinct==false){
//      for(int i=0;i<a.length();i++){
//	  	cout<<a[i]<<" ";
//	  }}
//	  for(auto it=positions[0].begin();it!=positions[0].end();++it){
//	  	cout<<*it<<" ";
//	  }
	  if(!instinct){
         for(int i=0;i<26;i++){
          if(visitedb[i]==true && visiteda[i]==false){
            instinct=true;break;
          }
         }
	  }
	  if(!instinct){
         for(int i=25;i>=0;i--){
           if(visitedb[i]){
             bool ok=true;
             for(auto it=positions[i].begin();it!=positions[i].end();++it){
               if(a[*it]!=b[*it]){ok=false;break;}
             }
             if(ok) continue;
             char h='a'+i;
             positions[i].insert(a.find(h));
             ans.push_back(make_pair(positions[i].size(),positions[i]));
           }
         }
	  }
	  if(instinct){
	     cout<<"-1\n";
	  }
	  else{
         cout<<ans.size()<<"\n";
         for(int i=0;i<ans.size();i++){
           unordered_set<int> &pos=ans[i].second;
           cout<<ans[i].first<<" ";
           for(auto it=pos.begin();it!=pos.end();++it){
              cout<<*it<<" ";
           }cout<<"\n";
         }
	  }
	}
	return 0;
}
