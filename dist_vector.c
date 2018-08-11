#include<stdio.h>
struct node
{
unsigned dist[20];
unsigned from[20];
}router[10];

int main(){

int costmatrix[20][20];

int n,i,j,k,count=0;

printf("\nEnter the number of router : ");
scanf("%d",&n);
for(i=1;i<n+1;i++)
for(j=1;j<n+1;j++)
{
printf("Enter the cost from %d to %d :\n",i,j);
scanf("%d",&costmatrix[i][j]);
costmatrix[i][i]=0;

router[i].dist[j]=costmatrix[i][j];
router[i].from[j]=j;

}

do
{
count=0;

for(i=1;i<n+1;i++)
for(j=1;j<n+1;j++)
for(k=1;k<n+1;k++)

if(router[i].dist[j]>costmatrix[i][k]+router[k].dist[j])
{
router[i].dist[j]=router[i].dist[k]+router[k].dist[j];
router[i].from[j]=k;

count++;
}

}
while(count!=0);

for(i=1;i<n+1;i++)
{
printf("\nBest path for router %d are \n",i);
for(j=1;j<n+1;j++)
{
printf("\nto Router %d From Router %d is at a of Distance %d\n",j,router[i].from[j],router[i].dist[j]);
}
}
printf("\n");

}
