#include<stdio.h>
int main(){
int A[20],i,n,x,p=0;
printf("how many inputs?");
scanf("%d",&n);
printf("Enter values");
for(i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
printf("Which number?");
scanf("%d",&x);
printf("Position:");
for(i=0;i<n;i++)
{
if(A[i]==x)
{p=i+1;
printf("%d ",p);}
}
}

