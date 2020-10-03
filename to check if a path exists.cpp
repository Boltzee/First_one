// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

vector <int> used;

bool check(vector<int> fog[], vector<int> lo, int target){
    for(int m=0;m<lo.size();m++){
        if(lo[m]==target)  return true;
        if(find(used.begin(),used.end(),lo[m])!=used.end()){
            continue;
        }
        else{
            used.push_back(lo[m]);
            if(check(fog,fog[lo[m]],target)) return true;
            else continue;
        }
    }
    return false;
}

int main(){
   int n,m;
   cin>>n>>m;
   vector <int> vec[n];
   for(int i=0;i<m;i++){
       int a,b;
       cin>>a>>b;
       vec[a].push_back(b);
       vec[b].push_back(a);
   }
   int q;cin>>q;
   while(q--){
       int a,b;
       cin>>a>>b;
       used.push_back(a);
       if(check(vec,vec[a],b))  cout<<"YES\n";
       else cout<<"NO\n";
   }
   return 0;
}
