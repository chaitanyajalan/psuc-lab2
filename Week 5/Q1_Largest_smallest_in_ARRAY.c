#include<stdio.h>
int main(){
int A[20],i,n,largest, smallest;
printf("How many inputs?");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
largest=A[0];
smallest=A[0];
for(i=0;i<n;i++)
{
    if(A[i]>largest)
    largest=A[i];
    if(A[i]<smallest)
    smallest=A[i];
}
printf("Largest=%d\nSmallest=%d",largest,smallest);

}
