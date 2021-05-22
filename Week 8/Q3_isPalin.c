#include<stdio.h>
int isPalin(char S[30])
{
int i,n;
n=strlen(S);
for(i=0;i<n;i++)
if(S[i]!=S[n-i-1])
return(0);
return(1);

}
int main()
{
char Str[30];
printf("Enter Word");
gets(Str);
if(isPalin(Str))
printf("Palindrome");
else
printf("Not Palindrome");
}
