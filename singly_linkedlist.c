#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create(int n)
{
    struct node *first,*temp,*newnode;
    int i;
    first=NULL;
    for(i=1;i<=n;i++)
    {
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("\nEnter the data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(first==NULL)
        {
            first=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return(first);
}
void display(struct node *first)
{
    while(first!=NULL)
    {
        printf("n%d ",first->data);
        first=first->next;
    }
}
int main()
{
    int n;
    struct node*first;
    // clrscr();
    printf("\nEnter the how many node: ");
    scanf("%d",&n);
    first=create(n);
    printf("\nDisplay singly linked list: \n");
    display(first);
    return(0);
}
