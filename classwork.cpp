#include<stdio.h>
int main()
{int a[7],insert;
printf("Enter the elements");
for(int i=0;i<7;i++)
{scanf("%d",&a[i]);
}
for(int i=0;i<7;i++)
{printf(" %d",a[i]);
}
printf("\n");
printf("enter the element to be searched");
scanf("%d",&insert);
for(int i=0;i<7;i++)
{if(a[i]==insert)
printf("the element at index =%d",i);
}

return 0;
}
