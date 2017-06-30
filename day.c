#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
clrscr();
gets(a);
switch(a)
{
case 'monday':true;break;
case 'tuesday':true;break;
case 'wednesday':true;break;
case 'thrusday':true;break;
case 'friday':true;break;
case 'saturday':false;break;
case 'sunday':false;break;
}
getch();
}
