#include<stdio.h>
#include<string.h>
int main()
{
char s[120];
int i=0,n=1;
printf("enter the string");
scanf("%s",s);
for(i=0;i<strlen(s);i++)
{
if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
{
if(s[i+1]=='='||s[i+1]=='+'||s[i+1]=='*'||s[i+1]=='/'||s[i+1]=='%')
{
printf("id%d",n);
n++;
}
}
if(s[i]>=48&&s[i]<=57)
{
printf("%c",s[i]);
}
else
{
switch(s[i])
{
case'+':printf("+");
break;
case'-':printf("-");
break; 
case'/':printf("/");
break;
//case'%':printf("%");
//break;
case'=':printf("=");
break;
case'*':printf("*");
break;
}
}
}
return 0;
}
