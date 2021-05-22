#include<stdio.h>
int main(){
int n,i,c,x,s=0;
printf("Enter a Number");
scanf("%d",&n);
c=n;
for(;c>0;)
{
    x=c%10;
    s=s+x;
    c=c/10;
    if(s>9&c==0)
        {c=s;s=0;}

}
printf("Generic root of%d=%d",n,s);
}
