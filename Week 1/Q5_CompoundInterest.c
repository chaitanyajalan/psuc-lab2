#include<stdio.h>
#include<math.h>
int main(){
//compound interest
int p,r,t;
float ci,x;
printf("Enter p");
scanf("%d",&p);
printf("\nEnter r");
scanf("%d",&r);
printf("\nEnter t");
scanf("%d",&t);

ci=(p*(pow((1+(r/100.0)),t))-p);

printf("ci=%f",ci);
}
