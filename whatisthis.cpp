#include<iostream>
#include<vector>

using namespace std;

int main(){
   for(int i=0;i<10;i++){
   	static int s=0;
   	cout<<s<<" ";s++;
   }

	return 0;
}
