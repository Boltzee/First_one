#include<bits/stdc++.h>
using namespace std;
int value[3005];

int function(int unique){
	 int result=1;
	 result= unique * (unique-1) * (unique-2);
	 result= result/6;
	 return result;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n,c,k;
		cin>>n>>c>>k;
		if(n<3){
			cout<<"0\n";continue;
		}
		bool instinct=false;
		vector <int> vec[c+1];
		for(int i=0;i<n;i++){
			int x,y,z;cin>>x>>y>>z;
			vec[z].push_back(x);
		}
        for(int i=0;i<c;i++){
        	cin>>value[i];
        }
        int count=0;int count1=0;
        for(int i=1;i<c+1;i++){
            if(vec[i].size()<3) count++;
            if(k<value[i]) count1++;
        	sort(vec[i].begin(),vec[i].end());
        }
        if(count==c || count1==c){
        	cout<<"0\n";continue;
        }
//        for(int i=1;i<c+1;i++){
//        	for(int j=0;j<vec[i].size();j++){
//        		cout<<vec[i][j]<<" ";
//			}cout<<"\n";
//		}
        int unique1[c+1];
        count=0;
        vector <pair<int, pair<int,int> > > pos;
        int num=0;
        for(int i=1;i<c+1;i++){
	        int unique=1;
	        int mul=1;
	        int temp=1;
	        vector <int> occ;
	        for(int j=0;j<vec[i].size()-1;j++){
	           if(vec[i][j]==vec[i][j+1]){
	            temp++;
	            }
	            else{
	       	      occ.push_back(temp);
	              mul=mul*temp;
	             temp=1;
	            }
	           if(vec[i][j]!=vec[i][j+1]){
	            unique++;
	           }
	        }
	        mul = mul * temp;
	        occ.push_back(temp);
            if(unique<3){
	         count++;continue;
            }
            int triangles=function(unique);
            triangles*= mul;
            cout<<triangles<<"\n";
            num+= triangles;
            unique1[i]=unique;
//            for(int k=0;k<occ.size();k++) cout<<occ[k]<<" ";
//            cout<<"\n";
            for(int k=0;k<occ.size();k++){
      	       int element= triangles/occ[k];
      	       cout<<"the element is "<<element<<"\n";
//	           pos.push_back(make_pair(unique,make_pair(occ[k],i)));
            }
        }
        if(count==c){
	      cout<<"0\n";continue;
        }
        sort(pos.begin(),pos.end());
        for(int i=pos.size()-1;i>=0;i--){
	       int val= value[pos[i].second.second];
	       if(val<=k){
	         int h= k/val;
	         if(h<pos[i].second.first){
	         	k= k- (h * val);
	         	num= num - (h * function1(unique1[pos[i].second.second]));
			 }
			 else{
			 	k= k- (pos[i].second.first)*val;
			 	num= num - (pos[i].second.first * function1(unique1[pos[i].second.second]));
			 	unique1[pos[i].second.second]--;
			 }
	         int g= min(h,pos[i].second.first);
	         k = k- (g * val);
	         num = num - (g * pos[i].first);
	        }
        }
//        cout<<num<<"\n";
	}
	return 0;
}
