#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


/*int mostFrequent(int arr[], int n) 
{ 
    // Sort the array 
    sort(arr, arr + n); 
  
    // find the max frequency using linear traversal 
    int max_count = 1, res = arr[0], curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = arr[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
  
    // If last element is most frequent 
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = arr[n - 1]; 
    } 
  
    return res; 
} */


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n,m,k,p,j=0,flag=1,upper;
		srand(time(0));
//		int a[n],b[k];
		cin>>n>>m>>k;
		int a[n],b[k];
		upper=m;
		for(int i=0;i<n;i++){
			for(int m=0;m<k;m++){
				cin>>b[m];
			}
			int num = (rand()%(upper-1+1))+1;
			a[i]=num;
// 			p = sizeof(b) / sizeof(b[0]);
// 			a[i]=mostFrequent(b,p);
//			a[i]=b[j];
//			if(flag==1)
//			  j++;
//			else 
//			  j--;
//			if(j==k-1) flag=0;
//			if(j==0) flag=1;
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
