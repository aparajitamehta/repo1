#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node* next;
};
void recursiveReverse(struct node** head_ref)
{
    struct node* first;
    struct node* rest;

    /* empty list */
    if (*head_ref == NULL)
	return;  

    /* suppose first = {1, 2, 3}, rest = {2, 3} */
    first = *head_ref; 
    rest  = first->next;

    /* List has only one node */
    if (rest == NULL)
	return;  

    /* reverse the rest list and put the first element at the end */
    recursiveReverse(&rest);
    first->next->next  = first; 

    /* tricky step -- see the diagram */
    first->next  = NULL;         

    /* fix the head pointer */
    *head_ref = rest;             
}
struct node* insert(struct node* root,int val)
{
    if(root==NULL)
    {
	root=(struct node*)malloc(sizeof(struct node));
	root->val=val;
	root->next=NULL;
	return root;
    }
    struct node* tmp=root;
    while(tmp->next!=NULL)
    {
	tmp=tmp->next;
    }
    tmp->next=(struct node*)malloc(sizeof(struct node));
    tmp=tmp->next;
    tmp->val=val;
    tmp->next=NULL;
    return root;
}
struct node* del(struct node* root,int x)
{
    struct node* tmp;
    struct node*t;
    if(root==NULL)
    {	printf("NOT POSSIBLE\n");
	return root;
    }
    if(root->val==x)
    {tmp=root->next;
	free(root);
	return tmp;}
    else
    {
	int flag=0;
	tmp=root;
	while(flag==0&&tmp->next!=NULL)
	{
	    if(((tmp->next)->val)==x)
	    {
		flag=1;
		t=tmp->next;
		(tmp->next)=((tmp->next)->next);
		free(t);

	    }
	    else
		tmp=tmp->next;
	}
	if(flag==0)
	{
	    printf("NOT FOUND\n");
	}
	return root;
    }
}
void print(struct node*root)
{
    if(root==NULL)
	printf("NULL\n");
    struct node*ptr=root;
    while(ptr!=NULL)
    {
	printf("%d\n",ptr->val);
	ptr=ptr->next;
    }
    return;
}
struct node* append(struct node*root,int x,int y)
{
    struct node*tmp=root;
    struct node*t;
    int flag=0;
    while(flag==0&&tmp->next!=NULL)
    {
	if((tmp->val)==x)
	{
	    flag=1;
	    t=tmp->next;
	    tmp->next=(struct node*)malloc(sizeof(struct node*));
	    (tmp->next)->val=y;
	    (tmp->next)->next=t;
	}
	tmp=tmp->next;
    }
    if(flag==0)
	printf("NOT FOUND\n");
    return root;
}
int main(void)
{
    struct node* root=NULL;
    int n,i,v,x,y;
    char c[2]={'a'};
    while(c[0]!='Q')
    {
	scanf("%s", c);
	switch(c[0])
	{
	    case 'I':scanf("%d",&x);
		     root=insert(root,x);
		     break;
	    case 'D':scanf("%d",&x);
		     root=del(root,x);
		     break;
	    case 'L':print(root);
		     break;
	    case 'A':scanf("%d%d",&x,&y);
		     root=append(root,x,y);
		     break;
	}
    }
    
    /*
	print(root);
	root=del(root,1);
	print(root);
	root=insert(root,2);
	print(root);
	root=del(root,2);
	root=del(root,1);
	print(root);
	root=insert(root,3);
	root=append(root,3,4);
	root=append(root,3,5);
	print(root);
	root=del(root,4);
	print(root);
	root=del(root,3);
	print(root);
	root=del(root,5);
	print(root);
	root=del(root,1);



      */
   
recursiveReverse(&root);
print(root);
    return 0;
}




