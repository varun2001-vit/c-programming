#include<stdio.h>
struct data
{int marks;
char result;
}s[3];
int main()
{printf("enter the marks\n");
for(int i=0;i<3;i++)
{printf("marks of %d\n",i+1);
scanf("%d",&s[i].marks);
if(s[i].marks<50)
{s[i].marks=s[i].marks+8;
}
else
{s[i].marks=s[i].marks+10;
}
}
for(int i=0;i<3;i++)
{if(s[i].marks<50)
s[i].result='F';
else
s[i].result='P';
}
for(int i=0;i<3;i++)
{printf("%d----%c\n",s[i].marks,s[i].result);
}

}
