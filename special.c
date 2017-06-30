#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int d=0,i=0,al=0,s=0;
char a[50];
clrscr();
printf("Enter the string:");
gets(a);
while(a[i]!='\0')
{
if((a[i]>='0')&&(a[i]<='9'))
{
d++;
}
else if(((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')))
{
  al++;
}
else
{
  s++;
}}
  i++;
printf("Special:%d",s);
getch();
}
