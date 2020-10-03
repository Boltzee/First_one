#include <stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,q;
		scanf("%d %d",&n,&q);
		 long int a[100001];
		for(int i=1;i<=n;i++)
		{
		    scanf("%ld",&a[i]);
		}
		while(q--)
		{
			int x1,x2,y;
			scanf("%d %d %d",&x1,&x2,&y);
			 int count=0,i=x1;
			while((a[i+1]-y)*(a[i]-y)<=0 && i<x2)
			{
               count++;i++;
			}
			printf("%d\n",count);
		}
	}
	return 0;
}
