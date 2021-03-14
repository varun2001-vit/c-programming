#include<stdio.h>
#include<conio.h>
int main()
{int n,i=1,f=1;
printf ("\nENTER A NUMBER");
scanf ("%d",&n); 
do
{f=f*i;
i=i+2;}
while (i<=n);
printf ("%d",f);
return 0;}

