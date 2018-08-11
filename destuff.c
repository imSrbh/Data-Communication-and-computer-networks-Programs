

#include<stdio.h>
#include<string.h>

int main()
{

	char a[20],d[20],b[20],x[20],z[20];
	int i,n,m,j,sl;
	printf("\nenter the no of characters in delimeter\n");
	scanf("%d",&n);
	printf("\nenter the delimeter at header side\n");
	for(i=0;i<n;i++)
	{
		scanf("\n%c",&a[i]);
	}
	printf("\nenter the delimeter at tail side\n");
	for(i=0;i<n;i++)
	{
		scanf("\n%c",&b[i]);
	}
	printf("\nenter the no of characters in original data\n");
	scanf("%d",&m);
	printf("\nenter the data\n");
	for(i=0;i<m;i++)
	{
		scanf("\n%c",&d[i]);

	}
	/*printf("\n the delimeters at header\n\n");
	for(i=0;i<n;i++)
	{
	printf("%c",a[i]);
	}
	printf("\n the delimeters at tailer \n\n");
	for(i=0;i<n;i++)
	{
	printf("%c",b[i]);
	}
	//printf("\n the data is \n\n");
	printf("\n\ncheck ---- After Character Stuffing\n\n");
	for(i=0;i<m;i++)
	{
	printf("%c",d[i]);
	}
    //check*/
    printf("\n\ncheck ---- After Character Stuffing\n\n");
    for(i=0;i<n;i++)
	{
	printf("%c",a[i]);
	}
//printf("\n\n");
j=0;


        for(i=0;i<m;i++)
        {

            if(d[i]=='d'&&d[i+1]=='l'&&d[i+2]=='e')
                {
                    x[j]='d';
                    j++;
                    x[j]='l';
                    j++;
                    x[j]='e';
                    j++;


            }

            x[j]=d[i];
            j++;

        }

        x[j]='\0';
        printf("%s",x);

//printf("\n\n");
 for(i=0;i<n;i++)
	{
	printf("%c",b[i]);
	}


printf("\n");

printf("At reciever side ------- the destuffed data is\n\n");



sl=strlen(x);
//printf("the length of stuffed data is %d ", sl);
//printf("\n\n");
j=0;


        for(i=0;i<sl;i++)
        {

            if(x[i]=='d'&&x[i+1]=='l'&&x[i+2]=='e')
                {
                    i=i+3;


            }

            z[j]=x[i];
            j++;

        }

        z[j]='\0';
        printf("%s",z);

printf("\n\n");

return 0;
}

