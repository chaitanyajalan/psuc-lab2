#include<stdio.h>
int main()
{
int f;
float c;
printf("input temp in fahrenheit:");
scanf("%d",&f);
c=(5*(f-32))/9.0;
printf("Temp in centigrade:%f",c);
}
