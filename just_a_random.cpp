#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[5]={3,1,2,5,4};
	int left=0,right=5;
	while(left<right){
		int middle= (left+right)/2;
		if(a[middle]<=2){
			left=middle+1;
		}
		else{
			right=middle;
		}
	}
	if(left>0 && a[left-1]==2){
		cout<<"present\n";
	}
	else {
		cout<<"not present\n";
	}
	return 0;
}