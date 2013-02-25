#include<stdlib.h>
#include<stdio.h>
typedef struct t{
    int data;
    int freq;
    struct t*left;
    struct t*right;
}tree;
int depth(tree*r)
{
    if(r==NULL)
	return 0;
    if(r->left==NULL&&r->right==NULL)
	return 1;
    else
	return  1+depth(r->left)>1+depth(r->right)?1+depth(r->left):1+depth(r->right) ;
}
void one_level_r(tree*root,int level)
{
    if (root==NULL)
	return;
    if(level==1)
	printf("%d %d    ",root->data,root->freq);
    else
    {
	one_level_r(root->right,level-1);
	one_level_r(root->left,level-1);
    }
}
void one_level_left(tree*root,int level)
{
    if (root==NULL)
	return;
    if(level==1)
	printf("%d %d    ",root->data,root->freq);
    else
    {
	one_level_left(root->left,level-1);
	one_level_left(root->right,level-1);
    }
}
void level(tree*root)
{
    int i;
    for(i=1;i<=depth(root);i++)
    {
	printf("%d level: ",i);
	if(i%2)
	one_level_left(root,i);
	else
	    one_level_r(root,i);
	printf("\n");
    }
}
tree*insert(int n,tree*root)
{
    if(root==NULL)
    {
	root=malloc(sizeof(tree));
	root->data=n;
	root->freq=1;
	root->left=NULL;
	root->right=NULL;
    }
    else
    {
	if(n<root->data)
	    root->left=insert(n,root->left);
	else if(n>root->data)
	    root->right=insert(n,root->right);
	else
	    root->freq++;
    }
    return root;
}
tree* findmin(tree*root)
{
    if(root==NULL)
	return NULL;
    if(root->left==NULL)
	return root;
    else
	return findmin(root->left);
}
tree* delete(tree*root,int n)
{
    
}
void branch(tree*r,int d1,int d2)
{
    if(d1==r->data||d2==r->data||d1<r->data&&d2>r->data||d1>r->data&&d2<r->data)
	printf("branch %d\n",r->data);
    else
    {
	if(d1<r->data)
	    branch(r->left,d1,d2);
	else
	    branch(r->right,d1,d2);
    }
}

void print(tree* r)
{
    if(r==NULL)
	return;
    printf("d:%d f:%d        ",r->data,r->freq);
    print(r->left);
    print(r->right);
}
int main(void)
{
    tree*queue[100];
    int front,rear;
    front=0;
    rear=0;
    tree*root=NULL;
    int i,n,m,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	scanf("%d",&m);
	root=insert(m,root);
    }
	queue[front]=root;
	rear++;
    while(front!=rear)
    {
	printf("%d ",queue[front]->data);
	if(queue[front]->left!=NULL)
	    queue[rear++]=queue[front]->left;
	if(queue[front]->right!=NULL)
	queue[rear++]=queue[front]->right;
	front++;
    }
    print(root);
    printf("\n");
    level(root);
    printf("h:%d\n",depth(root));
    branch(root,2,9);
    return 0;
}
