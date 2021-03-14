#include <stdio.h>
struct complex
{

    int real;
	int imagine;

};
void display(struct complex variable);
int main()
{

    struct complex a,b, x;
    printf("Enter 1st Complex Number: ");
	scanf("%d+%di", &a.real, &a.imagine);

    printf("Enter 2nd Complex Number: ");

    scanf("%d+%di", &b.real, &b.imagine);  
    x.real=a.real+b.real;
    x.imagine=a.imagine+b.imagine;
    display(x);
return 0;
}
void display(struct complex variable)
{printf("%d+i%d",variable.real,variable.imagine);
}
