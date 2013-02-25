#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node* next;
};
void print(struct node*root)
{
    if(root==NULL)
	printf("empty");
    struct node* ptr=root;
    while(ptr!=NULL)
    {
	printf("%d ",ptr->value);
	ptr=ptr->next;
    }
    printf("\n");
    return;
}
struct node* sort(struct node* head)
{
    int x,y,i,cnt;
    struct node* tmp=head;
    if(head==NULL)
	return;

    else
    {
	cnt=0;
	while(tmp!=NULL)
	{
	    tmp=tmp->next;
	    cnt++;
	}

	for(i=0;i<cnt-1;i++)
	{
	    tmp=head;
	    while(tmp->next!=NULL)
	    {
		{
		    x=tmp->value;
		    y=tmp->next->value;
		}
		if(y<x)
		{
		    tmp->value=x;
		    tmp->next->value=y;
		}
		tmp=tmp->next;
	    }
	}
    }
    return head;
}

struct node* insert(struct node* root,int m,int n)
{
    struct node*tmp;
    struct node*t;
    int count;
    if(root==NULL||m==0)
    {
	tmp=root;
	root=(struct node*)malloc(sizeof(struct node));
	root->value=n;
	root->next=tmp;
	return root;
    }
    else{
	count=0;
	tmp=root;
	while(tmp->next!=NULL&&count<m-1)
	{
	    tmp=tmp->next;
	    count++;
	}
	t=tmp->next;
	tmp->next=(struct node*)malloc(sizeof(struct node));
	tmp=tmp->next;
	tmp->value=n;
	tmp->next=t;
	return root;
    }
}
struct node* delete(struct node*root,int m)
{
    struct node*t;
    int count;
    struct node*tmp;
    if(root==NULL)
	return root;
    else
    {

	tmp=root;
	if(m==0)
	{
	    root=root->next;
	    free(tmp);
	}
	else
	{
	    count=0;
	    while(count<(m-1)&&tmp->next!=NULL)
	    {
		count++;
		tmp=tmp->next;
	    }
	    if(count==(m-1)&&tmp->next!=NULL)
	    {
		t=tmp->next;
		(tmp->next)=((tmp->next)->next);
		free(t);
	    }
	}
	return root;
    }
}
int main(void)
{
    struct node* root;
    int done=0,m,n;
    char c[2];
    while(!done)
    {
	scanf("%s",c);
	if(c[0]=='f')
	{
	    scanf("%d",&n);
	    root=insert(root,0,n);
	    print(root);
	}
	else if(c[0]=='i')
	{
	    scanf("%d%d",&m,&n);
	    root=insert(root,m,n);
	    print(root);
	}
	else if(c[0]=='d')
	{
	    scanf("%d",&m);
	    root=delete(root,m);
	    print(root);
	}
	else if(c[0]=='r')
	{
	    root=delete(root,0);
	    print(root);
	}
	else if(c[0]=='q')
	    done=1;


    }
    root=sort(root);
    print(root);
    return 0;
}













