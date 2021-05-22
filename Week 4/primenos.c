#include<stdio.h>
int main()
{
  int i,j,limit1,limit2,k;
  printf("enter the limits\n");
  scanf("%d%d",&limit1,&limit2);
  i=limit1;
  printf("Prime numbers are: \n");
  while(i<=limit2)
  {
    j=2;
    while(j<i)
    {
      if(i%j==0)
      {
    k=1;
        break;
        }
        else
          k=0;
          j++;
      }
      if (k==0)
      printf("%d\t",i);
      i++;
    }
    return 0;
    }
