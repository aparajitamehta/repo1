#include<stdio.h>
#include<stdlib.h>
struct node{
	int value;
	struct node* next;
};
struct node* insert_front(struct node*root,int n)
{
	struct node* tmp=root;
	root=(struct node*)malloc(sizeof(struct node));
	root->value=n;
	root->next=tmp;
	return root;
}
struct node* insert(struct node*root,int m,int n)
{
	struct node*tmp=root;
	struct node*t;
	int count=0;
	if(root==NULL)
	{
		root=(struct node*)malloc(sizeof(struct node));
		root->value=n;
		root->next=NULL;
		return root;
	}
	while(tmp->next!=NULL&&count<m)
	{	tmp=tmp->next;
		count++;
	}
	if(count!=(m-1))
	{
		t=tmp->next;
		tmp->next=(struct node*)malloc(sizeof(struct node));
		(tmp->next)->value=n;
		(tmp->next)->next=NULL;

	}
	else{
		t=tmp->next;
		tmp->next=(struct node*)malloc(sizeof(struct node));
		(tmp->next)->value=n;
		(tmp->next)->next=t;
	}
	return root;
}
struct node* del(struct node*root)
{
	struct node*tmp=root;
	if(root!=NULL)
	{
		root=root->next;
		free(tmp);
	}
	return root;
}
struct node* delete(struct node* root,int m)
{
	struct node*tmp;
	struct node*t;
	int count=0;
	if(root==NULL)
		return root;
	if(m==0)
	{
		tmp=root->next;
		free(root);
		return tmp;
	}
	else
	{
		count=0;
		tmp=root;
		while(tmp->next!=NULL&&count<m)
		{
			tmp=tmp->next;
			count++;
		}
		if(count!=(m-1))
			return root;
		else{
			t=tmp->next;
			tmp->next=((tmp->next)->next);
			free(t);
			return root;
		}
		
	}
}
void print(struct node*root)
{
	if(root==NULL)
		printf("empty\n");
	struct node* ptr=root;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->value);
		ptr=ptr->next;
	}
	printf("\n");
	return;
}
int main()
{
	int m,n;
	struct node*root=NULL;
	scanf("%d%d",&m,&n);
	root=insert(root,m,n);
	print(root);
	scanf("%d%d",&m,&n);
	root=insert(root,m,n);
	print(root);
	scanf("%d%d",&m,&n);
	root=insert(root,m,n);
	print(root);
	scanf("%d%d",&m,&n);
	root=insert(root,m,n);
	print(root);
	scanf("%d%d",&m,&n);
	root=insert(root,m,n);
	print(root);
}
