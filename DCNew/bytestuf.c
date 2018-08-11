#include<stdio.h>
#define maxx 20
int m,n;
char a[maxx],b[maxx],c[maxx];
int main()
{
int i,j;
printf("enter the number of character in data:");
scanf("%d",&n);
printf("enter the data at transmitter side");
for(i=0;i<=n;i++)
{
scanf("%c",&a[i]);
}
for(i=0;i<=n;i++)
{
if(a[i]=='d' && a[i+1]=='l' && a[i+2]=='e')
{
j=i+3;
}
}
if(j!=0)
{
for(i=0;i<j;i++)
{
b[i]=a[i];
}
b[j]='d';
b[j+1]='l';
b[j+2]='e';
for(i=j+3;i<=n+3;i++)
{
b[i]=a[i-3];
}
printf("stuffed data");
for(i=0;i<=n+3;i++)
{
printf("%c",b[i]);
}
}
else
{
for(i=0;i<=n;i++)
{
b[i]=a[i];
}
printf("stuffed data:");
for(i=0;i<=n;i++)
{
printf("%c",b[i]);
}
}


for(i=0;i<=n;i++)
{
if(a[i]=='d' && a[i+1]=='l' && a[i+2]=='e' && a[i+3]=='d' && a[i+4]=='l' && a[i+5]=='e')
{
j=i+3;
}
}

if(j!=0)
{
for(i=0;i<j;i++)
{
c[i]=b[i];
}
for(i=j;i<=n;i++)
{
c[i]=b[i+3];
}
printf("destuffing data:");
for(i=0;i<=n;i++)
{
printf("%c",c[i]);
}
}
else
{
for(i=0;i<=n;i++)
{
c[i]=b[i];
}
printf("destuffed data:");
for(i=0;i<=n;i++)
{
printf("%c",c[i]);
}
}

return 0;
}

