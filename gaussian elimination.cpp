#include<bits/stdc++.h>
using namespace std;
int n;
long double arr[25][25];
bool instinct=false;
bool master=false;
void swap(int index){
	if(index==n-1) return;
	int temp_index;
	for(int j=index;j<n;j++){
		if(arr[j][index]!=0){
			temp_index=j;instinct=true;break;
		}
	}
	for(int i=0;i<n+1;i++){
		int temp;
		temp= arr[index][i];
		arr[index][i]=arr[temp_index][i];
		arr[temp_index][i]=temp; 
	}
}

void gaussian(int index){
	if(arr[index][index]!=0){
//		if(index==n-1){
//			return;
//		}
		top:
			long double element=arr[index][index];
			for(int i=0;i<n+1;i++){
				arr[index][i]=(arr[index][i]/element);
//				cout<<arr[index][i]<<" ";
			}//cout<<"\n this is the array after division\n ";
			for(int i=0;i<n;i++){
				if(i!=index){
					long double mul= arr[i][index]/arr[index][index];
				for(int j=0;j<n+1;j++){
					arr[i][j]=arr[i][j]-arr[index][j]*mul;
//					cout<<arr[i][j]<<" ";
				}
				/*cout<<"updated row is above\n";*/}
			}
	}
	else{
		swap(index);
		if(instinct) goto top;
		else{
			master=true;return;
		}
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n+1;j++){
			cin>>arr[i][j];
		}
	}
	cout<<fixed<<setprecision(7);
	for(int i=0;i<n;i++){
		gaussian(i);
		if(master==true) break;
//		cout<<"the changed row is ";
//		for(int k=0;k<n+1;k++) cout<<arr[i][k]<<" ";
//		cout<<"\n";
	}
	if(master) return 0;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n+1;j++){
//			cout<<arr[i][j]<<" ";
//		}cout<<"\n";
//	}
	for(int i=0;i<n;i++){
		cout<<arr[i][n]<<" ";
	}
	return 0;
}
