#include<stdio.h>
int isnumber(char x)
{
if(x<='9'&&x>='0')
return(1);
else
return(0);
}
int main()
{
char s[30];
int i,c=0;
printf("Enter String");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(isnumber(s[i])==1)
c++;

}
printf("No of numbers in the string=%d",c);
}
