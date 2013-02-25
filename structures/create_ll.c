/*Here is simple function which uses pointer operations to build the list {1, 2, 3}*/
#include<stdio.h>
#include<stdlib.h>
struct node* BuildOneTwoThree();
struct node
{
    int data;
    struct node* next;
};
struct node* LinkTest(struct node* head,int n) { //insert at front
    struct node* newNode;
    newNode= malloc(sizeof(struct node));
    newNode->data = n;
    newNode->next = head;
    head = newNode; 
    return head;
}

int length(struct node* head)
{
    int count=0;
    struct node* tmp=head;
    while(tmp!=NULL)
    {
	count++;
	tmp=tmp->next;
    }
    return count;
}

void print(struct node* head)
{
    struct node* tmp=head;
    while(tmp!=NULL)
    {
	printf("%d  ",tmp->data);
	tmp=tmp->next;
    }
    printf("\n");
    return;
}
int main(void)
{
    struct node* head=NULL;
    head=BuildOneTwoThree();
    print(head);
    head=LinkTest(head,89);
    print(head);
    printf("length=%d\n",length(head));
    return 0;
}
struct node* BuildOneTwoThree()
{
    int i;
    struct node *root, *tmp;
    root=malloc(sizeof(struct node));
    tmp=root;
    for(i=1;i<=33;i++)
    {
    tmp->data=i;
    tmp->next=malloc(sizeof(struct node));
    tmp=tmp->next;
    }
    tmp->data=i;
    tmp->next=NULL;
    return root;
}
    



