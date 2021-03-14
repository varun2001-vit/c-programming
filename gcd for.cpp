#include<stdio.h>
int main()
{int a,b;
int divisor,rem,dividend;
scanf("%d%d",&a,&b);
dividend=a;
divisor=b;
rem=a%b;
for(rem;rem!=0;rem=dividend%divisor)
{dividend=divisor;
divisor=rem;
}
printf("%d",divisor);
return 0;
}
