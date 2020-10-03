#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int t;cin>>t;
  while(t--){
    int a,b,c,g,e,f;
    cin>>a>>b>>c;
    cin>>e>>f>>g;
    int sum=0;
    int x=min(c,f);
    sum+=2*x;c-=x;f-=x;
    int y=min(g,a);
    g-=y;a-=y;
    int z=min(g,c);
    g-=z;c-=z;
    int h=min(b,e);
    b-=h;e-=h;
    int k=min(b,f);
    b-=k;f-=k;
    int l=min(g,b);
    sum-=2*l;
    g-=l;b-=l;
    cout<<sum<<"\n";
   }
  return 0;
}
