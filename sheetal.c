#include<stdio.h>
#include<stdlib.h>

typedef struct linkedlist{
	int val;
	struct linkedlist *next;
}mynode;
void insert(mynode *head,int pos,int val);
void delete(mynode *head,int pos);
main(){
	mynode *head = NULL;
	char c;
	scanf("%c",&c);
	int n,m;
	char tmp;
	while(c!='q'){
		switch(c){
			case 'f': scanf("%d",&n);
				  insert(head,0,n);
				  scanf("%c",&tmp);
				  break;
			case 'i': scanf("%d",&m);
				  scanf("%d",&n);
				  insert(head,m,n);
				  scanf("%c",&tmp);
				  break;
			case 'r': delete(head,0);
				  scanf("%c",&tmp);
				  break;
			case 'd':scanf("%d",&m); 
				 delete(head,m);
				 scanf("%c",&tmp);
		}
		printf("\n");
	}
}
void insert(mynode *head,int pos,int val){
	int i;
	mynode *p=(mynode*)malloc(sizeof(mynode));
	mynode *q=head;
	mynode *r=NULL;
	p->val=val;
	p->next=NULL;
	if(pos==0){
		p->next=q;
		head=p;
		return;}
	else{
		for(i=0;i<pos-1&&q!=NULL;i++){
			q=q->next;
		}
		r=q->next;
		q->next=p;
		p->next=r;
		return;
	}
}
void delete(mynode *head,int pos){
	int i;
	mynode *q=head;
	mynode *r=NULL;
	mynode *p=NULL;
	if(pos==0){
		r=head->next;
		free(q);
		head=r;
		return;}
	else{
		for(i=0;i<pos-1&&q!=NULL;i++){
			q=q->next;
		}
		if(q->next->next!=NULL){
			r=q->next->next;
			p=q->next;
			q->next=r;
			free(p);
			return;}
		else{return;}
	}
}
