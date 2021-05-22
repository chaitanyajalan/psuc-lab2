#include<stdio.h>
int main()
{
int i,j,m,n,x,c=0,rs=0,cs=0;
int A[10][10];
printf("Enter order of matrix A");
scanf("%d%d",&m,&n);
printf("Enter matrix A\n");

for(i=0;i<m;i++)
for(j=0;j<n;j++)
    scanf("%d",&A[i][j]);

for(i=0;i<m;i++){
for(j=0;j<n;j++)
    {rs=rs+A[i][j];
    cs=cs+A[j][i];}
printf("ROW %d=%d \t COLUMN %d=%d\n",i+1,rs,i+1,cs);
rs=0;cs=0;
    }

}
