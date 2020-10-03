#include<iostream>
using namespace std;

int binarysearch(const int list[],int listlength,int searchitem)
{
	int first=0;
	int last=listlength-1;
	int mid;
	bool found=false;
	
	while(first<=last && !found){
		mid=(first+last)/2;
		if(list[mid]==searchitem){
			found=true;
		}
		else if(list[mid]>searchitem){
			last=mid-1;
		}
		else{
			first=mid+1;
		}
	}
	if(found){
		return mid;
	}
	else{
		return -1;
	}
}

int main()
{
	int a[100];
	int n,i;
	cout<<"Enter the size of the array:";
	cin>>n;
	for(i=0;i<n;i++){
		a[i]=i;
	}
	int k,z;
	cout<<"Enter an element to search the array:";
	cin>>k;
	z=binarysearch(a,n,k);
	cout<<z<<endl;
	return 0;
}
