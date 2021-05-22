#include<stdio.h>
int main()
{
int a,b,c,l,l1,l2;
printf("Enter a");
scanf("%d",&a);
printf("Enter b");
scanf("%d",&b);
printf("Enter c");
scanf("%d",&c);
/*l1=(a<b)?a:b;
l2=(b<c)?b:c;
l=(l1<l2)?l1:l2;
*/
l=(a<b)?((a<c)?a:c):((b<c)?b:c);
printf("Smallest number=%d",l);
}
