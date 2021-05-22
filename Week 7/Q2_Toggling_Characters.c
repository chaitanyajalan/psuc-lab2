#include<stdio.h>
int main()
{
char Str[100];
printf("Enter String");
gets(Str);
int i;
for(i=0;Str[i]!='\0';i++)
{
    if(Str[i]>='a'&&Str[i]<='z')
        Str[i]=Str[i]+'A'-'a';
    if(Str[i]>='A'&&Str[i]<='Z')
        Str[i]=Str[i]-('A'-'a');
}
printf("%s",Str);
}
