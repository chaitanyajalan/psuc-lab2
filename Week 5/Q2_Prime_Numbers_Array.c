#include<stdio.h>
int main(){
int A[20],n,n1,i,j,flag=1;
printf("How many inputs?");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
printf("Prime numbers in the Array:\n");
for(i=0;i<n;i++)
{
for(j=2;j<A[i];j++)
{
    if(A[i]%j==0)
    {flag=0;break;}
}
if(A[i]>1)
if(flag)
    printf("%d ",A[i]);
flag=1;

}
}
