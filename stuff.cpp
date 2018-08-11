#include<stdio.h>
#define maxx 30
int a[maxx],b[maxx],c[maxx];
int main()
		{
		int i,j=0,n;
		printf("enter the size of bits:");
		scanf("%d",&n);
		printf("enter the bits:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

		for(i=0;i<n;i++)
		{
			if(a[i]==0 && a[i+1]==1 && a[i+2]==1 && a[i+3]==1 && a[i+4]==1 && a[i+5]==1 && a[i+6]==1 && a[i+7]==0)
		{
			j=i+6;
		}
		}

		if(j!=0)
		{
		for(i=0;i<j;i++)
		{
		b[i]=a[i];
		}
		b[j]=0;
		for(i=j+1;i<n+1;i++)
		{
		b[i]=a[i-1];
		}
		printf("new bits:");
		for(i=0;i<n+1;i++)
		{
		printf("%d",b[i]);
		}
		}
		else
		{
		for(i=0;i<n;i++)
		{
		b[i]=a[i];
		}
		printf("new bits:");
		for(i=0;i<n;i++)
		{
		printf("%d",b[i]);
		}
		}


		for(i=0;i<n+1;i++)
		{
		if(a[i]==0 && a[i+1]==1 && a[i+2]==1 && a[i+3]==1 && a[i+4]==1 && a[i+5]==1 && a[i+6]==0 && a[i+7]==1 && a[i+8]==0)
		{
		j=i+6;
		}
		}
		if(j!=0)
		{
		for(i=0;i<j;i++)
		{
		c[i]=b[i];
		}
		for(i=j;i<n;i++)
		{
		c[i]=b[i+1];
		}
		printf("new new bits");
		for(i=0;i<n;i++)
		{
		printf("%d",c[i]);
		}
		}
		else
		{
		for(i=0;i<n;i++)
		{
		c[i]=b[i];
		}
		printf("new  new bits:");
		for(i=0;i<n;i++)
		{
		printf("%d",c[i]);
		}
		}

		return 0;
		}



