#include<stdio.h>
int main(){
int A[20],n,pos,i,j,x;
printf("How many inputs?");
scanf("%d",&n);
printf("Enter values");
for(i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
printf("WHich position value to be entered and value?");
scanf("%d%d",&pos,&x);
for(i=n;i>pos-1;i--)
{
A[i]=A[i-1];
}
A[pos-1]=x;
n++;
for(i=0;i<n;i++)
{
printf("%d ",A[i]);
}
}
