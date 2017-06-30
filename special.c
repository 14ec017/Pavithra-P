#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int d=0,l;
char a[50];
clrscr();
printf("Enter the string:");
gets(a);
l=strlen(a);
for(i=0;i<=l;i++)
{
if((a[i]!=' ')||(a[i]!>='0'&&a[i]!<='9')||(a[i]!>='a'&&a[i]!<='z')||(a[i]!>='A'&&a[i]!<='Z'))
{
d++;
}}
printf("Special:%d",d);
getch();
}
