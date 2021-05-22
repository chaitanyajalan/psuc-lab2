#include<stdio.h>
int Largest(int B[20],int n)
{
int i,l;
l=B[0];
for(i=0;i<n;i++)
if(B[i]>l)
l=B[i];
return(l);
}
int main()
{
int A[20],n,i;
printf("Enter number of values");
scanf("%d",&n);
printf("Enter Values");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
printf("Largest=%d",Largest(A,n));
}
