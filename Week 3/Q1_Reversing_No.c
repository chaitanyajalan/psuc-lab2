#include<stdio.h>
int main()
{
int n,a,s=0,c;
printf("Enter a number");
scanf("%d",&n);
c=n;
while(n>0){
a=n%10;
s=s*10+a;
n=n/10;
}
printf("%d",s);

if(s==c)
    printf("\nit is a palindrome");
else
    printf("\nnot a palindrome");
}
