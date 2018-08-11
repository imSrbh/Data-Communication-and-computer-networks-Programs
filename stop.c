#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<windows.h>
int main()
{
int i,j,nfr,x1=10,x,x2;
//for(i=0;i<20;i++)

nfr=10;
i=1;
j=1;

printf("number of frames%d\n",nfr);
while(nfr>0)
{
printf("sending frame %d\n",i);
srand(x1++);
x=rand()%10;
if(x%2==0)
{
for(x2=1;x2<2;x2++)
{
printf("waiting for %d sec\n",x2);
Sleep(x2);
}
printf("sending frame %d\n",i);
srand(x1++);
x=rand()%10;
}
printf("ack for frame %d\n",j);
nfr=nfr-1;
i++;
j++;


}
return 0;
}
