#include<stdio.h>
int main(){
//Roots of a quadratic equation
int a,b,c;
float D,d,i,r,r1,r2;
printf("Enter a b and c");
scanf("%d%d%d",&a,&b,&c);
d=pow(b,2)-4*a*c;
switch(d>0)
{
    case 1:D=sqrt(d);r1=(-b+D)/(2.0*a);r2=(-b-D)/(2.0*a);
            printf("R1=%f\nR2=%f",r1,r2);
            break;
    case 0: switch(d==0)
    {
        case 1:r1=-b/(2*a);r2=-b/(2*a);
        printf("R1=%f\nR2=%f",r1,r2);break;

        case 0:r=-b/(2*a);d=-d;D=sqrt(d);i=D/(2*a);
        printf("R1=%f+i%f",r,i);
        printf("\nR2=%f-i%f",r,i);
    }

}
}
