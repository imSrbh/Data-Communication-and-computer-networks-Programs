#include<stdio.h>

int main()
{
  int w,i,f,frames[50];
  printf("Enter window size: ");
  scanf("%d",&w);

  printf("\nenter no of frames to transmit");
  scanf("%d",&f);;

  printf("\nenter %d frames", f);
  for(i=1;i<=f;i++)
    scanf("%d",&frames[i]);

  for(i=1;i<=f;i++)
  {
    if(i%w==0)
    {
      printf("%d\n", frames[i]);
      printf("\ack sent");

    }
    else
    {
      printf("%d",frames[i]);

    }
  }
    if(f%w!=0)
    {
      printf("Ack received");
    }
    return 0;

}