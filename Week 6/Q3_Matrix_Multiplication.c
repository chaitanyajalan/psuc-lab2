#include<stdio.h>
int main(){
int n,i,j,k,m,p,q;
int A[10][10],B[10][10],C[10][10];
printf("Enter order of matrix A");
scanf("%d%d",&m,&n);
printf("Enter matrix A\n");

for(i=0;i<m;i++)
for(j=0;j<n;j++)
    scanf("%d",&A[i][j]);

printf("Enter order of matrix B");
scanf("%d%d",&p,&q);
if(p!=n)
    printf("Invalid Orders");
else
{


printf("Enter matrix B\n");

for(i=0;i<p;i++)
for(j=0;j<q;j++)
    scanf("%d",&B[i][j]);

for(i=0;i<m;i++)
for(j=0;j<q;j++)
{
C[i][j]=0;
for(k=0;k<n;k++)
C[i][j]=A[i][k]*B[k][j]+C[i][j];
}
printf("A x B=\n\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
   printf("%d ",C[i][j]);
printf("\n");
}
}
}
