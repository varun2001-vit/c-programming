#include<stdio.h>
int main()
{int a,b,sum=0,digit;
printf("enter the number");
scanf("%d",&a);
b=a;
while(b)
{digit=b%10;
sum=sum+digit*digit*digit;
b=(int)b/10;
}
if(sum==a)
{printf("amstrong");
}
else
{printf("not amstrong");
}
return 0;}             
