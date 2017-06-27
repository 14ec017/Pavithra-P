#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10],c[10],d[10];
int i=0;
clrscr();
gets(a);
gets(b);
gets(c);
gets(d);
if((a[i+1]==a[i+2)&&b[i+1]==b[i+2]))
{
printf("true");
}
else
{
printf("false");
}
if((c[i]==c[i+2])&&(d[i]==d[i+2]))
{
printf("\ntrue");
}
else
{
printf("\nfalse");
}
getch();
}
