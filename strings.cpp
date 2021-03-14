#include <stdio.h>
#include<string.h>
int main()
{
    char name1[30],name2[30],len;
    printf("Enter name1: ");
    gets(name1); 
    printf("Enter name2: ");
    gets(name2);
    strcat(name1,name2);
    puts(name1);
    len=strlen(name1);
    printf("%d",len);
	 
	    // read string
    
    return 0;
}

