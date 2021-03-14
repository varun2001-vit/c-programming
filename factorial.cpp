#include<stdio.h>
int main()
{int n,f=1;
scanf ("%d",&n); 
if(n%2==0)
{for(int i=2;i<=n;i=i+2)
f=f*i;
}
else
{for(int i=1;i<=n;i=i+2)
f=f*i;
}
printf("%d",f);
return 0;
}
