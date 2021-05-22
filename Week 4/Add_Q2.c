#include<stdio.h>
int main(){
int i,n;
printf("Printing Numbers till 10\nEnter 1 to skip 5 or 2 to print till 5 only");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
    if(n==1&&i==5)
        continue;
    if(n==2&&i==6)
    break;
         printf("%d\n",i);
}
}
