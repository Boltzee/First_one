#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
struct sample
{
	int num=0,j=0;
	int d[100];
};
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		vector <sample> vec(26);
		int n,count=0;
		cin>>n;
		cin>>s;
		for(int i=0;i<n;i++){
			vec[s[i]-'a'].num++;
			vec[s[i]-'a'].d[vec[s[i]-'a'].j]=i;
			vec[s[i]-'a'].j++;
		}
		int k=0;
        int i=0;
        while(i<vec.size()-k){
        	int num1=0;
        	for(int m=0;m<vec.size()-k;m++){
        		if(vec[m].num>vec[i].num){break;}
        		else{num1++;}
			}
			if(num1==vec.size()-k){
				sample temp;
				temp=vec[vec.size()-k-1];
				vec[vec.size()-k-1]=vec[i];
				vec[i]=temp;k++;
				i=-1;}
			i++;
	    }
		int num2=0;
		for(i=0;i<vec.size();i++){
			if(vec[i].num!=0)                                            //vec[vec.size()-i-1].d[m]
			  num2++;
		}
		for(i=0;i<num2;i++)
		{
			for(int m=0;m<vec[vec.size()-i-1].j;m++)
			{
				if(s[vec[vec.size()-i-1].d[m]+1]-s[vec[vec.size()-i-1].d[m]]==1 && vec[vec.size()-i-1].d[m]!=n-1){
					count++;vec.erase(vec.begin()+vec[vec.size()-i-1].d[m]+1);
				}
				if(s[vec[vec.size()-i-1].d[m]+1]-s[vec[vec.size()-i-1].d[m]]==1 && vec[vec.size()-i-1].d[m]!=0){
					count++;vec.erase(vec.begin()+vec[vec.size()-i-1].d[m]-1);
				}
			}
		}
		cout<<count<<endl;
		vec.clear();
	}
	return 0;
}
