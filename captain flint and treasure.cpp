#include<bits/stdc++.h>
using namespace std;
int value[200005];
int ind[200005];
bool visited[200005]={false};
bool present[200005]={false};
#define stop cout<<"\n";
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>value[i];
	}
	for(int i=1;i<=n;i++){
		cin>>ind[i];
		if(ind[i]!=-1){
			present[ind[i]]=true;
		}
	}
	queue <int> leaves;
	for(int i=1;i<=n;i++){
		if(!present[i]){
			leaves.push(i);
			visited[i]=true;
		}
	}
//	for (size_t i = 0; i < leaves.size(); ++i) {
//        int elem = std::move(leaves.front());
//        leaves.pop();
//        cout<<elem<<" ";
//        leaves.push(std::move(elem));
//    }
//	cout<<"\n";
	long long int sum=0;
	int pos[n],j=0;;
	while(!leaves.empty()){
		int element=leaves.front();
		leaves.pop();
		pos[j]=element;j++;
		sum+=value[element];
		value[ind[element]]+=value[element];
		if(ind[element]!=-1){
			leaves.push(ind[element]);
//			visited[ind[element]]=true;
		}
	}
	cout<<sum<<"\n";
	for(int i=0;i<n;i++) cout<<pos[i]<<" ";
	stop;
	return 0;
}
