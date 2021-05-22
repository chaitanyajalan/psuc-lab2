#include<stdio.h>
int CornerSum(int r,int c)
{
int A[5][5];
int s=0,j,i;
printf("Enter Matrix");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&A[i][j]);
s=A[0][0]+A[0][c-1]+A[r-1][0]+A[r-1][c-1];
return(s);

}
int main()
{
int r,c,sum;
printf("Enter no of rows and columns");
scanf("%d%d",&r,&c);
sum=CornerSum(r,c);
printf("Sum of Corners=%d",sum);
}
