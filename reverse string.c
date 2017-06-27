#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,n;
char a[50];
clrscr();
gets(a);
n=strlen(a);
for(i=n;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}
