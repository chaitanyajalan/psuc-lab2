#include<stdio.h>
#include<math.h>
int main()
{
int n,i,j,flag=1,s=0,trace=0;
float norm=0.0;
printf("Enter order of matrix");
scanf("%d",&n);
int A[20][20]={0};
printf("Enter matrix\n");

for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
    scanf("%d",&A[i][j]);
    s=s+(A[i][j]*A[i][j]);
}
for(i=0;i<n;i++)
trace=trace+A[i][i];
norm=sqrtf(s);

printf("Trace=%d\tNorm=%f",trace,norm);
}
