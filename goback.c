#include<stdio.h>
int main()
{
    int n,ack,s,i,j;
    s=0;
    printf("\nenter the window size\n");
    scanf("%d",&n);
    while(1)
    {

        for(i=0;i<n;i++)
        {
            printf("\n frame %d has been sent\n",s);
            s=s+1;
            if(s==n)
            {
                break;
            }
        }
        printf("\n enter the last ack recieved\n");
        scanf("%d",&ack);
        if(ack==n)
            break;
        else
            s=ack;
    }
    return 0;
}
