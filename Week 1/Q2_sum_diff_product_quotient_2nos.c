#include<stdio.h>
int main()
{
int a,b,s,d,p,q;
printf("input first number:");
scanf("%d",&a);
printf("input second number:");
scanf("%d",&b);
s=a+b;
d=a-b;
p=a*b;
q=a/b;
printf("%d+%d=%d\n",a,b,s);
printf("%d-%d=%d\n",a,b,d);
printf("%d*%d=%d\n",a,b,p);
printf("%d/%d=%d\n",a,b,q);
}
