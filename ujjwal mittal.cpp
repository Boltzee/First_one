#include<iostream>
using namespace std;

#define check(a) if(a=='E'){_Exit(0);}

int main(){
  long long int n,x,l,u;
  cin>>n;
  x=n;
  int p=0,j=0;
  char c[300],k[3];
  int i=0;
  cout<<x<<endl;
  cin>>c[0];
  l=1;u=n;
  if(c[0]=='E'){ _Exit(0);}
  if(c[0]=='G'){
    while(p!=1){
      i++;
      cout<<x<<endl;
      cin>>c[i];
      if(c[i]=='E'){_Exit(0);}
      for(j=0;j<2;j++){
        cout<<x<<endl;
        cin>>k[j];
        check(k[j]);
        if(k[0]==c[i]){
          if(k[0]=='L'){
            u=x;
            x=(l+u)/2;
          }
          else if(c[i]=='G'){
            l=x;x=(l+u)/2;
          }
          goto v;
        }
        x--;
      }
      if(k[1]==k[0]){
        if(k[0]=='L'){
            u=x;
            x=(l+u)/2;
          }
          else if(c[i]=='G'){
            l=x;x=(l+u)/2;
          }
          goto v;
      }
      if(x==(x+u)/2){
	  (x+1)/2==x;}
      else{x=(x+u)/2;}
      v:;
    }
  }
  p=0;
  if(c[0]=='L'){
    i++;
    x=(l+u)/2;
    cout<<x<<endl;cin>>c[i];
    while(p!=1){
      for(int j=0;j<2;j++){
        x++;
        cout<<x<<endl;
        cin>>k[j];
        check(k[j]);
        if(k[0]==c[i]){
          if(k[0]=='L'){
            u=x;
            x=(l+u)/2;
          }
          else if(c[i]=='G'){
            l=x;x=(l+u)/2;
          }
          goto v1;
        }
      }
      if(k[1]==k[0]){
        if(k[0]=='L'){
            u=x;
            x=(l+u)/2;
          }
          else if(c[i]=='G'){
            l=x;x=(l+u)/2;
          }
          goto v1;
      }
      if(x==(x+u)/2){(x+1)/2==x;}
      else{x=(x+u)/2;}
      v1:
      cout<<x<<endl;
      i++;
      cin>>c[i];
      check(c[i]);
    }
  }
  return 0;
}
