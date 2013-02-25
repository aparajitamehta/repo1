#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node
{
        int data;
	    struct node* next;
};
node* head;
void reverse(struct node* head)
{
    struct node* prev=NULL;
    struct node* current=head;
    struct node*next;
    while(current!=NULL)
    {
	next=current->next;
	current->next=prev;
	prev=current;
	current=next;
    }
    head=prev;
}

void printList(struct node *head)
{
        struct node *temp = head;
	    while(temp != NULL)
		    {
			        printf("%d  ", temp->data);   
				        temp = temp->next; 
					    }
}    
void insert(struct node *head,int n)
{
    struct node* new=malloc(sizeof(struct node));
    new->data=n;
    new->next==head;
    head=new;
}
int main()
{
    head=NULL;
    insert(head,12);
    insert(head,9);
    insert(head,99);
    insert(head,7);
    print(head);
    reverse(head);
    printf("\n Reversed Linked list \n");
         printList(head);    
	 return 0;
}


