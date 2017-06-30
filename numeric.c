#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int c=0,len;
clrscr();
printf("Enter the string:");
gets(a);
len=strlen(a);
for(i=0;i<=len;i++)
{
if(a[i]>='0'&&a[i]<='9')
{
c++;
}}printf("Numeric:%d",c);
}
getch();
}
