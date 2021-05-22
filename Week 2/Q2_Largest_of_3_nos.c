#include<stdio.h>
int main()
{
int a,b,c,l,l1,l2;
printf("Enter first number");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);
printf("Enter third number");
scanf("%d",&c);
//using conditional operaror
/*l1=(a>b)?a:b;
l2=(b>c)?b:c;
l=(l1>l2)?l1:l2;
printf("%d is the largest",l);
*/
if((a>b)&&(a>c))
    printf("%d is largest",a);
else if((b>a)&&(b>c))
    printf("%d is largest",b);
else
    printf("%d is largest",c);


}
