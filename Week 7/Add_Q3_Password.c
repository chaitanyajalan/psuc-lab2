#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

int i=0;
char s[20],c;
printf("Enter Password");
while((c=getch())!=13)
{

   s[i]=c;
   printf("*");

i++;


}
s[i]='\0';
printf("\nPassword is:");

puts(s);


}
