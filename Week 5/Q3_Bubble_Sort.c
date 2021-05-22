#include<stdio.h>
int main(){
int A[20],n,i,j,temp;
char c;
printf("How many inputs?");
scanf("%d",&n);
printf("Enter Inputs");

for(i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
printf("Enter A for Ascending\nEnter B for Descending");
//scanf("%d",&c);

fflush(stdin);
scanf("%c",&c);
switch(c)
{

case 'A':    for(j=0;j<n;j++){
        for(i=0;i<n-1;i++)
            {
    if(A[i]>A[i+1])
    {
        temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }
}}

  break;

 case 'B':   for(j=0;j<n;j++){
        for(i=0;i<n-1;i++)
            {
    if(A[i]<A[i+1])
    {
        temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }
}}


}
for(i=0;i<n;i++)
    {printf("%d ",A[i]);

    }
}
