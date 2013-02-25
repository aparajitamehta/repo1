#include<stdio.h>
#include<stdlib.h>
#include "list.h"
LINK string_to_list(char s[])
{
	LINK head;
	if(s[0]=='\0')
		return NULL;
	else
	{
		head=malloc(sizeof(ELEMENT));
		head->d=s[0];
		head->next=string_to_list(s+1);
		return head;
	}
}
void  print(LINK head)
{
LINK t=head;
while(t!=NULL)
{
	printf("%c\t",t->d);
t=t->next;
}
}
int main(void)
{
	char s[10];
	scanf("%s",s);
	LINK head=string_to_list(s);
	print(head);
	return 0;
}


