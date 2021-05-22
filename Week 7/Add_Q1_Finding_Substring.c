#include<stdio.h>
int main()
{
char s[100],f[100];
printf("Enter String");
gets(s);
printf("Enter substring to be found:\t");
gets(f);
int i,j,pos,l,flag;
for(l=0;f[l]!='\0';l++);
printf("Positions:");
for(i=0;s[i]!='\0';i++)
{
if(s[i]==f[0])
    {   pos=i+1;
        flag=1;
        for(j=0;j<l;j++)
            if(s[j+i]!=f[j])
            flag=0;
        if(flag==1)
                printf(" %d",pos);
    }

}
}
