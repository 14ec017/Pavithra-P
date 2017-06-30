#include<stdio.h>
#include<conio.h>
void main()
{
char a[5],b[5];
clrscr();
scanf("%d%d",&a,&b);
int i=0;
if((a[i+1]==a[i+2])&&(b[i+1]==b[i+2]))
{
printf("True");
}
else
{
printf("False");
}
getch();
}
