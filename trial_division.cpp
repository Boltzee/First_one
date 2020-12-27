#include<bits/stdc++.h>
using namespace std;

int main(){
    string a[5]={"zadd","z","zeeeaa","zzzzzzz","zaaaa"};
    sort(a,a+5);
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    string s;cin>>s;
    reverse(s.begin(), s.end());
    cout<<s;
}