#include<stdio.h>
int main(){
int c,n,i,j,s=0;
printf("Enter a Number");
scanf("%d",&n);
for(i=1;i<n;i++)
{
    c=n%i;
    if(c==0)
        s=s+i;
}
if(s==n)
    printf("%d is a perfect no",n);
else
    printf("%d is not a perfect no.",n);
}
