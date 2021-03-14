#include<stdio.h>
struct data
{ int feet;
int inches;
}sample[2],sum;

int main()
{ sum.feet=0;
 sum.inches=0;
for(int i=0;i<2;i++)
{printf("enter the feet for %d",i+1);
scanf("%d",&sample[i].feet);
printf("enter the inches for  %d",i+1);
scanf("%d",&sample[i].inches);
}
printf("sum");
sum.feet=sample[0].feet+sample[1].feet;
sum.inches=sample[0].inches+sample[1].inches;

printf("total");
printf("total feet=");
printf("%d",sum.feet);
printf("%d",sum.inches);
}


