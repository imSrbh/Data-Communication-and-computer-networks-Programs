#include<stdio.h>
#define maxx 20
int a[maxx],b[maxx],temp[maxx],c[maxx];
int g[maxx];
int main()
{
int n,n1,m,i,j=0,flag=1,flg=1,flagg=1;

printf("enter the no of bit in generator");
scanf("%d",&n1);
printf("enter the generator bits:");
for(i=0;i<n1;i++)
{
scanf("%d",&g[i]);
}

printf("enter the no of  data bits:");
scanf("%d",&n);
printf("enter the data:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
b[i]=a[i];
}
for(i=n;i<(n+n1-1);i++)
{
b[i]=0;
}

for(i=0;i<(n+n1-1);i++)
{
printf("%d",b[i]);
}

for(i=0;i<(n+n1-1);i++)
{
temp[i]=b[i];
}


for(i=0;i<n;i++)
{
flag=1;
if(b[i]==1)
{
for(j=i+1;j<i+n;j++)
{
b[j]=b[j]^g[flag];
flag=flag+1;
}
}
else
{
for(j=i+1;j<i+n;j++)
{
b[j]=b[j]^0;
}
}
}

printf("remainder:");
for(i=n;i<n+n1-1;i++)
{
printf("%d",b[i]);
}


for(i=0;i<n;i++)
{
b[i]=temp[i];
}


printf("bit send for transmition:");
for(i=0;i<n+n1-1;i++)
{
printf("%d",b[i]);
}


printf("enter your no of bits:");
scanf("%d",&m);
printf("enter your data:");
for(i=0;i<m;i++)
{
scanf("%d",&c[i]);
}


for(i=0;i<m;i++)
{
flg=1;
if(c[i]==1)
{
for(j=i+1;j<i+m;j++)
{
c[j]=c[j]^g[flg];
flg=flg+1;
}
}
else
{
for(j=i+1;j<i+m;j++)
{
c[j]=c[j]^0;
}
}
}


printf("remainder 2: ");
for(i=m;i<m+n1-1;i++)
{
printf("%d",c[i]);
if(c[i]==0)
{
flagg=flagg+1;
}
}


if(flagg==(n1))
{
printf("accept");
}
else
{
printf("reject");
}
return 0;
}
