#include<iostream>
using namespace std;

int main(){
  int *p;
  int q=0;
  p=&q;
  *p=10;
  cout<<q;
  return 0;
}