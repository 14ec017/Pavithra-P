#include<stdio.h>
#include<conio.h>
void main()
{
char a[50],b[5];
int i=0,l;
clrscr();
printf("Enter the string:");
gets(a);
l=strlen(a);
for(i=0;i<=l;i++)
{
b=a[i];
a[i]=a[i+1];
a[i+1]=b;
}
printf("After:");
for(i=0;i<=l;i++)
{
printf("%c",a[i]);
}
getch();
}
