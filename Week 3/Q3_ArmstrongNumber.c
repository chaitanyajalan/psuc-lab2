#include<stdio.h>
#include<math.h>
int main(){
int n,x,a,c=0;
printf("Enter number");
scanf("%d",&a);
n=a;
while(n>0)
    {
    x=n%10;
    c=x*x*x+c;
    n=n/10;
    }
if(c==a)
    printf("%d is an Armstrong no.",a);
else
    printf("%d isn't an Armstrong no.",a);
}
