#include<iostream>

using namespace std;

void re_size(int* &u,int n)
{
	if(n==0) return; 
	int arr[10];
	for(int i=0;i<10;i++){
		arr[i]=u[i];
	}
	delete [] u;
	u=new int [10+n];
	for(int i=0;i<10;i++){
		u[i]=arr[i];
	}
}

int main()
{
	int n;
	int *p=new int[10];
	for(int i=0;i<10;i++){
		cin>>p[i];
	}
	cout<<"Enter the number of additional number of student:";
	cin>>n;
	re_size(p,n);
	cout<<"Enter the roll numbers of addtional "<<n<<"students\n";
	for(int i=10;i<10+n;i++){
		cin>>p[i];
	}
	for(int i=0;i<10+n;i++){
		cout<<p[i]<<" ";
	}
	return 0;
}
