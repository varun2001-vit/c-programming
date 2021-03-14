#include<stdio.h>
int main()
{int a[2][2],b[2][2],s[2][2];
printf("enter the first matrix");
for (int i=0;i<2;i++)
{
for (int j=0;j<2;j++)
{scanf("%d",&a[i][j]);
}
}
printf("enter the second matrix");
for (int i=0;i<2;i++)
{
for (int j=0;j<2;j++)
{scanf("%d",&b[i][j]);
s[i][j]=a[i][j]+b[i][j];
}
}
for (int i=0;i<2;i++)
{
for (int j=0;j<2;j++)
{printf("%d",s[i][j]);
}
}



}
