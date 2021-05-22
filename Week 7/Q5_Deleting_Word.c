#include<stdio.h>
int main()
{
char s[100],D[20];
printf("Enter String:\t");
gets(s);
printf("Enter word to deleted:\t");
gets(D);
int i,l,pos,j,flag,l1;
for(l=0;D[l]!='\0';l++);
for(l1=0;s[l1]!='\0';l1++);

for(i=0;s[i]!='\0';i++)
{if(s[0]==D[0])
    {   pos=i;
        flag=1;
        for(j=0;j<l;j++)
            if(s[j+i]!=D[j])
            flag=0;
        if(flag==1)
                break;
    }
 if(s[i]==D[0]&&s[i-1]==' ')
    {   pos=i;
        flag=1;
        for(j=0;j<l;j++)
            if(s[j+i]!=D[j])
            flag=0;
        if(flag==1)
                break;
    }
}
if(flag==0)
    printf("No matching word\n");
else
{
    for(i=pos;s[i+l+1]!='\0';i++)
    {
        s[i]=s[i+l+1];
    }
    s[l1-l-1]='\0';
}
printf("Output:\t%s",s);
}
