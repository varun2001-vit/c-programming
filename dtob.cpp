#include<stdio.h>
#include<conio.h>
int main()
{int n,j,bin=0,a;
printf ("\nENTER THE NUMBER");
scanf ("%d",&n);
j=1;
while (n>0)
{a=n%2;
bin=bin+a*j;
j=j*10;
n=n/2;}      
printf("\nCONVERTED NUMBER IS:%d",bin);
return 0;}
