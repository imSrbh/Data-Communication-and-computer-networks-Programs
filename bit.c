
#include<stdio.h>
#include<string.h>

int main()
{

	char a[20],d[20],b[20],z[20];
	int i,n,m,j,k,len,sl;
	printf("\nenter the no of bits in delimeter\n");
	scanf("%d",&n);
	printf("\nenter the delimeter\n");
	for(i=0;i<n;i++)
	{
		scanf("\n%c",&a[i]);


	}
	printf("\nenter the no of bits in data\n");
	scanf("%d",&m);
	printf("\nenter the data\n");
	for(i=0;i<m;i++)
	{
		scanf("\n%c",&d[i]);


	}

	printf("\n\ncheck ---- After Bit Stuffing\n\n");

    for(i=0;i<n;i++)
	{
	printf("%c",a[i]);
	}
printf("\n");
j=0,k=0;

        for(i=0;i<m;i++)
        {

            if(d[i]==a[j])
                {
                    if(j==n-1)
                    {
                        b[k]='0';

                        k++;
                        b[k]=d[i];

                        k++;
                        j=0;

                    }




                    else
                    {


                    b[k]=d[i];

                    j++;
                    k++;
                    }
                }

                else if(j>0&&d[i]!=a[j])
                {
                    i=i-1;
                    j = 0;
                }
                else
                {

                    b[k]=d[i];

                    k++;

                }

            }
            b[k]='\0';
            printf("%s",b);


printf("\n");
 for(i=0;i<n;i++)
	{
	printf("%c",a[i]);
	}


printf("\n\n");
printf("at reciever side after destuffing\n");
sl = strlen(b);
printf("%d\n\n",sl);
printf("\n");
j=0,k=0;

        for(i=0;i<sl;i++)
        {

            if(b[i]==a[j])
                {
                    //printf("1");
                    z[k]=b[i];
                    printf("one z : %c",z[k]);
                    k++;
                    j++;
                    printf(" j = %d",j);
                    if((j==n-1)&&(b[i+2]==a[j]))
                    {
                            //c=c+1;

                            z[k]=a[j];
                            i=i+2;
                            j=0;

                            printf(" three z : %c",z[k]);
                             k=k+1;
                    }

                    else if(j==n-1 && b[i+2]!=a[j])
                    {
                        j=0;
                       // printf("%c",z[k]);
                        //i=i-1;
                    }

                }

                else if(j>0&&b[i]!=a[j])
                {
                    i=i-1;
                    j = 0;
                    //printf("2");

                }
                else
                {
                    //printf("4");

                    z[k]=b[i];
                    printf("two z : %c",z[k]);
                    k++;


                }

            }
            z[k]='\0';
            printf("\n");
            printf("%s",z);



return 0;
}

