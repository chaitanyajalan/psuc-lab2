#include<stdio.h>
#include<math.h>
int main()
{
//roots of quadratic eqn
int a,b,c;
float D,d,r1,r2,r,i;
printf("Enter a");
scanf("%d",&a);
printf("Enter b");
scanf("%d",&b);
printf("Enter c");
scanf("%d",&c);
d=pow(b,2)-4*a*c;
if(d>0){
        D=sqrt(d);
    r1=(-b+D)/(2*a);
    r2=(-b-D)/(2*a);
    printf("R1=%f and R2=%f",r1,r2);
}
else if(d==0)
{
    D=sqrt(d);
    r1=(-b)/(2*a);
    r2=(-b)/(2*a);
    printf("R1=%f and R2=%f",r1,r2);
}
else
{
    d=-d;
    D=sqrt(d);
    r=(-b)/(2*a);
    i=D/(2*a);
    printf("R1= %f+i%f",r,i);
    printf("\nR2= %f-i%f",r,i);
}

}
