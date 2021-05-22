#include<stdio.h>
int main()
{
int n,i,j,flag=1;
int A[20][20];
printf("Enter order of matrix A");
scanf("%d",&n);
printf("Enter matrix A\n");

for(i=0;i<n;i++)
for(j=0;j<n;j++)
    scanf("%d",&A[i][j]);

for(i=0;i<n-1;i++)
for(j=i+1;j<(n-1-i);j++)
if(A[i][j]!=0)
flag=0;

if(flag==1)
printf("Lower Triangle");
else
printf("Not Lower Triangle");
}
