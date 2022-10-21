#include<stdio.h>
int main()
{
	int n,s,x[1000],y[1000],i;
	scanf("%d %d",&s,&n);
	for(i=0;i<n;i++)scanf("%d %d",&x[i],&y[i]);
	for(i=0;i<n;i++)
	{
		if(s>x[i]&&x[i]!=0)
		{
			s+=y[i];
			x[i]=0;
			i=-1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(x[i]!=0)
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}
