#include<stdio.h>
int main()
{
char Str[100];
int n,i,p=1;
printf("Enter String\n");
gets(Str);
for(n=0;Str[n]!='\0';n++);
for(i=0;Str[i]!='\0';i++)
{
if(Str[i]!=Str[n-1-i])
{p=0;break;}
}
if(p==1)
printf("Palindrome");
else
printf("Not Palindrome");
}
