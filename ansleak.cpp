#include<iostream>
#include<algorithm>
using namespace std;


int mostFrequent(int arr[], int n) 
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
} 


int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,m,k,p;
//		int a[n],b[k];
		cin>>n>>m>>k;
		int a[n],b[k];
		for(int i=0;i<n;i++){
			for(int m=0;m<k;m++){
				cin>>b[m];
			}
			p = sizeof(b) / sizeof(b[0]);
			a[i]=mostFrequent(b,p);
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
