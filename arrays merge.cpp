#include<stdio.h>
int main()
{int m=5,n=5,l;
l=m+n;
int a[m],b[n],c[l];
for (int i=0;i<m;i++)
{scanf("%d",&a[i]);
}
for (int i=0;i<n;i++)
{scanf("%d",&b[i]);
}
for (int i=0;i<m+n;i++)
{if(i<m)
{c[i]=a[i];}
else 
if(i>=m)
{
c[i]=b[i-5];}
}

for (int i=0;i<l;i++)
{printf("%d\n",c[i]);
}

}
