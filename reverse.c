#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,j,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=n-1;i>=0;i--)
  {
    printf("%d",a[i]);
  }
  getch();
}
