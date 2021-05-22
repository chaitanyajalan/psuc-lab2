#include<stdio.h>
int main()
{
int n,i,j,flag=1;
printf("Enter order of matrix");
scanf("%d",&n);
int A[20][20]={0};
printf("Enter matrix\n");

for(i=0;i<n;i++)
for(j=0;j<n;j++)
//printf("%d",A[i][j]);
scanf("%d",&A[i][j]);

for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(A[i][j]!=A[j][i])
{flag=0;break;}

if(flag==1)
printf("Symmetric");
else
printf("Not Symmetric");


}
