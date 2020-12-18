#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;cin>>T;
    while(T--){
        int n;cin>>n;
        vector <int> vec;
        int sum=0;
        for (int i=1;i<=n;i*=2){
            vec.push_back(i);
            n-=i;
        }
//        for(auto x: vec) cout<<x<<" ";
//        cout<<"\n";
        if(n>0){
            vec.push_back(n);
            sort(vec.begin(),vec.end());
        }
        cout<<vec.size()-1<<"\n";
        for(int i=1;i<vec.size();i++) cout<<vec[i]-vec[i-1]<<" ";
        cout<<"\n";
    }
    return 0;
}
