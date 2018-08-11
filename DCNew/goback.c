#include<stdio.h>
#define maxx 20
int main()
{
int flag =0;
int a[maxx][maxx];
int b[maxx];
int n,m,i,j,windowsize,sent=0,ack;
printf("enter number of frame:\n");
scanf("%d",&n);
printf("give the seq no to frame:\n");
for(i=1;i<=n;i++)
{
b[i]=i;
}
printf("enter window size\n");
scanf("%d",&windowsize);

while(1)
{
for( i = 0; i < windowsize; i++)
{

printf("Frame %d has been transmitted.\n",sent);
sent++;
if(sent == windowsize)
break;
}
printf("\nPlease enter the last Acknowledgement received.\n");
scanf("%d",&ack);
if(ack == windowsize)
break;
else
sent = ack;

}
return 0;
}
