#include<stdio.h>
int main(){
int i,j,n,k,m;
printf("Enter N and K");
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
 for(j=1;j<=k;j++)
 {
     m=j*i;
     printf("%d ",m);
 }
 printf("\n");
}

}
