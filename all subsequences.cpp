#include<iostream>
#include<math.h>

long long int printSubsequences(int arr[], int n,long long int sum,long long int r,long long int x,long long int y);

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		long long int x,y,l,r,sum=0,temp;
		cin>>x>>y>>l>>r;
		long long int n=x,m=y;
		int a[100],j=0,one[100],zero[100],q=0,w=0;
		sum=n|m;temp=sum;
		do{
		    a[j]=temp%2;
		    if(a[j]==1){
		        one[q]=j;q++;
		    }
		    else{
		        zero[w]=j;w++;
		    }
		    j++;
		    temp=temp/2;
		}while(temp!=0);
		if(sum>=l && sum<=r){
//		    goto kiran;
		}
		else if(sum>l && sum>r){
			cout<<sum<<"\n";
			sum=printSubsequences(one,q,sum,r,x,y);
//			cout<<sum<<"\n";
//		    long long int diff=sum-r,diff1,sum2,g,h;
//		    diff1=sum&diff;
//		    if(diff1==diff){
//		    	sum2=sum-diff;
//		    	long long int quark=0,sum2=sum;
//				for(int i=l;i<=sum2;i++){
//					long long int sam=(x&i)*(y&i);
//					if(sam>quark){
//						quark=sam;
//						sum=i;
//					}
//				}
//		    	goto kiran;
//			}
//			else{
//				int t=(int)log2(diff)+1;
//				for(int i=0;i<q;i++){
//					if(one[i]>=t){
//					  t=one[i];break;}
//				}
//				sum=sum-pow(2,t);
//				cout<<sum<<" "<<sum2<<"\n";
//				g=(x&sum)*(y&sum);h=(x&sum2)*(y&sum2);
//				if(g>=h){
//					goto kiran;
//				}
//				else{
//					sum=sum2;goto kiran;
//				}
////				if(sum<l){
//					int quark=0;
//					for(int i=l;i<=r;i++){
//						long long int sam=(x&i)*(y&i);
//						if(sam>quark){
//							quark=sam;
//							sum=i;
//						}
//					}
//				}
//				goto kiran;
//			}
		}
//		else{
//			long long int diff=l-sum,diff1;
//		    diff1=(~sum)&diff;
//		    if(diff1==diff){
//		    	sum=sum+diff;
//		    	goto kiran;
//			}
//			else{
//				int t=log2(diff)+2;
//				if(zero[w-1]<=t){
//				 for(int i=0;i<w;i++){
//				    if(zero[i]>=t){
//					  t=zero[i];break;}
//				 }
//			    }
//			    else{
//			    	t=one[q-1]+1;
//				}
//				sum=sum+pow(2,t);
//				if(sum>r){
//					int quark=0;
//					for(int i=l;i<=r;i++){
//						long long int sam=(x&i)*(y&i);
//						if(sam>quark){
//							quark=sam;
//							sum=i;
//						}
//					}
//				}
//				goto kiran;
//			}
//		}
//		kiran:
//		if((x&sum)*(y&sum)>0 && sum>=l && sum<=r)
//		  cout<<sum<<"\n";
//		else
//		  cout<<l<<"\n";
	}
	return 0;
}

long long int printSubsequences(int arr[], int n,long long int sum,long long int r,long long int x,long long int y) 
{ 
    unsigned int opsize = pow(2, n); 
    int temp=0;
    for (int counter = 1; counter < opsize; counter++) 
    { 
        int sum2=sum,dof;
        for (int j = 0; j < n; j++) 
        { 
            if (counter & (1<<j)) {
                cout<<arr[j]<<" ";
                sum2=sum2-pow(2,arr[j]);
			} 
        } 
        dof=(sum2&x)*(sum2&y);
        if(sum2<=r){
        	cout<<"sum2-->"<<sum2<<" ";
        	if(dof>temp)
        	   cout<<"dof-->"<<dof<<"\n";
        	   temp=sum2;
		}
		else
		  cout<<"\n";
//        cout<<"sum2-->"<<sum2<<"value-->"<<(sum2&x)*(sum2&y) <<"temp-->"<<temp<<"\n"; 
    } 
    cout<<"\n"<<temp<<"\n";
    return temp;
} 
