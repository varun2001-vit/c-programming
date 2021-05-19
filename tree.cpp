#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    struct node *left;
    struct node *right;
    int data;
};
struct node *create(){
    struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node)); 
    
    int x;
    printf("Enter data (-1 for no data)\n");
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    ptr->data=x;
    printf("Enter the left child of %d",x);
    ptr->left=create();
    
    printf("Enter the right child of %d",x);
    ptr->right=create();

    return ptr;

}
void preorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }else{
        printf("%d->",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void inorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }else{
        inorder(ptr->left);
       printf("%d->",ptr->data);
        inorder(ptr->right);
    }    
}
void postorder(struct node *ptr){
    if(ptr==NULL){
        return ;
    }else{
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d->",ptr->data);
    }
}
int main(){
    struct node *root=NULL;
    int ch;
    do
    {
        printf("\n**Binary Tree Menu***\n");
        printf("1. Create a binary tree\n");
        printf("2. Preorder traversal\n");
        printf("3. Inorder traversal\n");
        printf("4. Postorder traversal\n");
        printf("0. Exit......\n");
        printf("Enter your choice....");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            root = create();
            break;
        case 2:
            if(root==NULL){
                printf("Create a tree first\n");
            }
            else{
            preorder(root);
            }
            break;
        case 3:
            if(root==NULL){
                printf("Create a tree first\n");
            }
            else{
            inorder(root);
            }
            break;
        case 4:
            if(root==NULL){
                printf("Create a tree first\n");
            }
            else{
            postorder(root);
            }
            break;
        case 0:
            break;
        default:
            printf("Entered wrong choice!!!\n");
            break;
        }
    } while (ch!=0);
    return 0;
}
