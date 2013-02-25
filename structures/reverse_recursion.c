#include<stdio.h>
#include<stdlib.h>
#include"list.h"
void print(LINK root)
{
	if(root==NULL)
		printf("NULL\n");
	LINK ptr=root;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->d);
		ptr=ptr->next;
	}
	printf("\n");
	return;
}
LINK reverse(LINK head,LINK prev)
{
	if(head==NULL)
	{
		return prev;
	}
		head=reverse(head->next,head);
		head->next=prev;
}
int main(void)
{
	int n,i;
	LINK head;
	LINK new;
	scanf("%d",&n);
	head=(LINK)malloc(sizeof(ELEMENT));
	scanf("%d",&head->d);

	new=head;
	for(i=0;i<n-1;i++)
	{
		new->next=malloc(sizeof(ELEMENT));
		new=new->next;
		scanf("%d",&new->d);
	}
	new->next=NULL;
	print(head);
	head=reverse(head,NULL);

	print(head);
	return 0;
}





