#include<stdio.h>
int main()
{
float a,b,c,d,p,q,r,s;
a=30.0;
b=10.0;
c=5.0;
d=15.0;
p=(a+b)*c/d;
q=((a+b)*c)/d;
r=a+(b*c)/d;
s=(a+b)*(c/d);
printf("(a+b)*c/d=%f",p);
printf("\n((a+b)*c)/d=%f",q);
printf("\na+(b*c)/d=%f",r);
printf("\n(a+b)*(c/d)=%f",s);
}
