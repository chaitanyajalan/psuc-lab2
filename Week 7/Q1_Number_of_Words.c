#include<stdio.h>
int main()
{

char Str[50];
printf("Enter String");
gets(Str);
int i,c;
if(Str[0]==' ')
    c=0;
else
    c=1;
for(i=0;Str[i]!='\0';i++)
{
    if(Str[i]==' ')
       {
        if(Str[i+1]==' ')
            continue;
        c++;
       }


}
printf("Number of words=%d",c);
}
