#include<stdio.h>
int main()
{
int r;
float v,sa;
printf("input radius:");
scanf("%d",&r);
v=4*(3.14*r*r*r)/3.0;
sa=4*3.14*r*r;
printf("Volume of sphere=%f",v);
printf("\nSurface Area of Sphere=%f",sa);
}
