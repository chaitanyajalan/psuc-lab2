#include<stdio.h>
int main()
{
int n,i,j,temp;
int A[20][20];
printf("Enter order of matrix A");
scanf("%d",&n);
printf("Enter matrix A\n");

for(i=0;i<n;i++)
for(j=0;j<n;j++)
    scanf("%d",&A[i][j]);

for(i=0;i<n;i++)
{
temp=A[i][i];
A[i][i]=A[i][n-i-1];
A[i][n-i-1]=temp;
}

printf("Output:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++)
    printf(" %d",A[i][j]);
printf("\n");}
}
