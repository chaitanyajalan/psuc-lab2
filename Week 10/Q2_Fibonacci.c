#include<stdio.h>
int rFib(int n)
{
if(n==0)
return 0;
if(n==1)
return 1;
return(rFib(n-1)+rFib(n-2));
}
int main()
{int n;
printf("Enter n");
scanf("%d",&n);
printf("%d",rFib(n));
}
