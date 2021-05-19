#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
int main()
{int ch;
struct node *head=NULL;
struct node *newnode,*temp=NULL;
do
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==NULL)
{head =newnode;
temp=newnode;
}
else
{temp->next=newnode;
temp=newnode;
}
temp->next=head;
printf("do you want to continue(0 or 1)");
scanf("%d",&ch);
}while(ch==1);
printf("printing the linked list");
temp=head;
while(temp->next!=head)
{
printf("%d--",temp->data);
temp=temp->next;
}
printf("%d--",temp->data);
}
