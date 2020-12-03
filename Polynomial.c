#include<stdio.h>
#include<stdlib.h>
struct node{
	int power,coff;
	struct node *next;
};
struct node *head=NULL, *tail=NULL;
void create(){
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the coefficient and power ");
	scanf("%d %d",&newnode->coff,&newnode->power);
	if(head==NULL)
	head=tail=newnode;
	else
	tail->next=newnode,tail=newnode;
	newnode->next=NULL;
}
void traverse(){
	struct node *temp=head;
	printf("The polynomial is ")
	while(temp!=NULL){
		if (temp==head || temp->coff<0)
		printf("%dx^%d",temp->coff,temp->power);
		else
			printf("+%dx^%d",temp->coff,temp->power);
			temp=temp->next;
}
	
}
void main()
{
	int a,i;
	printf("Enter the no. of terms of polynomial ");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	create();
	traverse();
}
