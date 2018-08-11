#include<stdio.h>
#include<string.h>

char del[100],msg[100],msgd[100],msgmod[100],temp[100],delch[100];

int main()
{
	int l=0,m,x=0,i=0,j=0,k=0;

	for(i=0;i<16;i++)
		temp[i]='\0';

		i=0;
	printf("\n\nEnter DELIMETER: ");
	scanf("%s",del);

	printf("\nEnter MESSAGE: ");
	scanf("%s",msg);

	l = strlen(del);
	m = strlen(msg);
	for(i=0;i<m;i++)
	{
		while(temp[x]!='\0')
			x++;
		if(del[x]==msg[i])
		{
			temp[x]=msg[i];
			if(temp[l-1]!=NULL)
			{
				break;
			}
		}
		else
		{
			for(j=0;j<l;j++)
				temp[j]=='\0';
		}
		x=0;
		msgd[i]=msg[i];
	}
printf("\n\nDETECTION OVER\n");
printf("\nm = %d    i = %d",i,m);

l=i;
for(k=0;k<m-i;k++)
{
	msgmod[k]=msg[l];
	l++;
}
msgmod[m-i]=NULL;

printf("\nEnter the bit/byte you want to stuff: ");
scanf("%s",delch);

strcat(msgd,delch);
strcat(msgd,msgmod);
strcat(msgd,del);
strcat(del,msgd);

printf("\n\nFinal String: ");
puts(del);
printf("\n\n");

	return 0;
}
