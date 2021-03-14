#include<stdio.h>
int main()
{int a[3][3]={{1,2,3},{3,4,5},{6,7,9}};
int b[3][3]={{1,2,3},{3,4,5},{6,7,9}};
int sum[3][3]={{0,0,0},{0,0,0},{0,0,0}};
int (*p)[3];
int (*q)[3];
p=a;
q=b;
for( int i=0;i<3;i++)
{
for( int j=0;j<3;j++)
{
sum[i][j]=*(*(p+i) + j) + *(*(q + i) + j);
printf("%d ",sum[i][j]);
}
printf("\n");
}
return 0;
}
