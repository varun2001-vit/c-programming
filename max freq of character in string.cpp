#include<stdio.h>
#include<string.h>
int main()
{char a[400];
int freq[400],as,max;
scanf("%[^\n]s",&a);
for(int i=0;i<400;i++)
{freq[i]=0;
}
for(int i=0;a[i]!='\0';i++)
{as=(int)a[i];
freq[as]++;
}
max=freq[0];
for(int i=1;i<400;i++)
{if(freq[i]>max)
max=freq[i];
}
printf("%d",max);
printf("%c",a[max]);
}


