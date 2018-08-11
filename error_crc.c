
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{

int div[10],divi[10],rem[10],a[10],b[10],c[10];
int i,j,n,sum,m,p,q=1,u;
printf("\n enter the length of divisor\n");
scanf("%d",&n);
printf("\n enter the divisor\n");
for(i=0;i<n;i++)
{
scanf("%d",&div[i]);
}




printf("\n enter the length of divident\n");
scanf("%d",&m);
printf("\n enter the divident\n");
for(i=0;i<m;i++)
{
scanf("%d",&divi[i]);
}
u=m;
/////////////////////////////////
for(i=0;i<n-1;i++)
{
	divi[m]=0;
	m=m+1;
}
for(i=0;i<m;i++)
{
printf("%d",divi[i]);
}
i=0;
////////////////////
for(p=0;p<n;p++)
{
	a[p]=divi[i];
	//printf("\na[p] %d\n",a[p]);
	i=i+1;
	b[p]=div[p];
	//printf("b[p] %d\n",b[p]);
}
//printf(" i is start %d\n",i);
j=0;
while(i<(m+1))
{
p=0;
q=1;
if(div[j]==a[p])
{printf("match \n\n");
for(p=0;p<n;p++)
{
c[p]=a[p]^b[p];
printf("c[p] %d\n",c[p]);
}
}
else
{
for(p=0;p<n;p++)
{
c[p]=a[p];
//printf("c[p] with not matching %d\n",c[p]);
}

}
//printf(" i is %d\n",i);
for(p=0;p<n;p++)
{	if(p==n-1)
{
	a[p]=divi[i];
	//printf("a[p] mod  %d\n",a[p]);
	i=i+1;
}
	else
{
	a[p]=c[q];
	//printf("a[p] mod  %d\n",a[p]);
	q=q+1;
}

}



}
/////////////////////////
printf(" rem\n");
for(i=0;i<n;i++)
{
printf(" %d ",c[i]);

}
//printf(" div\n");
	for(p=1;p<n;p++)
	{
	divi[u]=c[p];
	//printf(" %d at %d ",u,divi[u]);
	u=u+1;
	}

printf(" at sender side\n");
for(i=0;i<u;i++)
{
printf(" %d ",divi[i]);

}
/////////////////////////////////////

printf("\n enter the length of divident\n");
scanf("%d",&m);
printf("\n enter the divident\n");
for(i=0;i<m;i++)
{
scanf("\n%d",&divi[i]);
}




printf(" at reciver side\n");
u = m;

i=0;
////////////////////
for(p=0;p<n;p++)
{
	a[p]=divi[i];
	//printf("\na[p] %d\n",a[p]);
	i=i+1;
	b[p]=div[p];
	//printf("b[p] %d\n",b[p]);
}
//printf(" i is start %d\n",i);
j=0;
while(i<(m+1))
{
p=0;
q=1;
if(div[j]==a[p])
{//printf("match \n\n");
for(p=0;p<n;p++)
{
c[p]=a[p]^b[p];
//printf("c[p] %d\n",c[p]);
}
}
else
{
for(p=0;p<n;p++)
{
c[p]=a[p];
//printf("c[p] with not matching %d\n",c[p]);
}

}
//printf(" i is %d\n",i);
for(p=0;p<n;p++)
{	if(p==n-1)
{
	a[p]=divi[i];
	//printf("a[p] mod  %d\n",a[p]);
	i=i+1;
}
	else
{
	a[p]=c[q];
	//printf("a[p] mod  %d\n",a[p]);
	q=q+1;
}

}



}


printf(" rem at reciever\n");
for(i=0;i<n;i++)
{
printf(" %d ",c[i]);


}
int flag =0;
for(i=0;i<n;i++)
{
if(c[i]==0)
{
flag = 1;
}

else
{
flag = 0;
break;
}
}

if(flag==1)
{
printf(" accepted\n");
}
else
{
printf("\n rejected\n");
}






return 0;
}
