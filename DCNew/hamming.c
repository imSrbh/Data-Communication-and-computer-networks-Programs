#include<stdio.h>
int main() 
{
int a[7],b[7];
int c,c1,c2,c3,i;
printf("enter data of 4 bits:");
scanf("%d",&a[0]);
scanf("%d",&a[1]);
scanf("%d",&a[2]);
scanf("%d",&a[4]);

a[6]=a[0]^a[2]^a[4];
a[5]=a[0]^a[1]^a[4];
a[3]=a[0]^a[1]^a[2];

printf("Encoded data is:");
for(i=0;i<7;i++)
printf("%d",a[i]);

printf("Enter received data bits :");
for(i=0;i<7;i++)
scanf("%d",&b[i]);

c1=b[6]^b[4]^b[2]^b[0];
c2=b[5]^b[4]^b[1]^b[0];
c3=b[3]^b[2]^b[1]^b[0];
c=c3*4+c2*2+c1 ;

if(c==0 && b[6]==a[6] && b[5]==a[5] && b[3]==a[3] )
{
printf("No error while transmission of data");
}
else 
{
printf("error on position %d",c);

printf("Data sent : ");
for(i=0;i<7;i++)
printf("%d",a[i]);

printf("Data received : ");
for(i=0;i<7;i++)
printf("%d",b[i]);

printf("Correct message is");

if(b[7-c]==0)
b[7-c]=1;
else
b[7-c]=0;

for (i=0;i<7;i++)
{
printf("%d",a[i]);
}
}
return 0;
}
