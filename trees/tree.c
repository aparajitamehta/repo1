#include<stdlib.h>
#include<stdio.h>
typedef struct t
{
    int n;
    struct t*l;
    struct t*r;
}tree;
int no_of_levels_btw_2_items(tree*r1,int x,int y,int l)
{
    int a,b;
    if(r1==NULL)
	return 0;
    if(r1->n==y)
    {	
	return l;
    }
    else if(r1->n==x)
    {
	a=no_of_levels_btw_2_items(r1->l,r1->l->n,y,l+1);
	b=no_of_levels_btw_2_items(r1->r,r1->r->n,y,l+1);
	return a>b?a:b;
    }
    if(l==0)
    {
	a=no_of_levels_btw_2_items(r1->l,x,y,l+1);
	b=no_of_levels_btw_2_items(r1->r,x,y,l+1);
	return a>b?a:b;
    }

    else 
    {
	a=no_of_levels_btw_2_items(r1->l,r1->l->n,y,l+1);
	b=no_of_levels_btw_2_items(r1->r,r1->r->n,y,l+1);
	return a>b?a:b;
    }
}
int main(void)
{
    tree*root=NULL;
    root=malloc(sizeof(tree));
    root->n=9;
    root->l=malloc(sizeof(tree));
    root->r=malloc(sizeof(tree));
    root->l->n=44;
    root->r->n=23;
    root->l->l=malloc(sizeof(tree));
    root->l->r=malloc(sizeof(tree));
    root->l->l->n=4;
    root->l->r->n=2;
    root->r->l=malloc(sizeof(tree));
    root->r->l->n=34;
    printf("%d\n",no_of_levels_btw_2_items(root,9,44,0));

    return 0;
}





