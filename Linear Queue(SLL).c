#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL, *tail=NULL;
void enqueue(){
struct node *newnode=	(struct node *)malloc(sizeof(struct node));
printf("Enter newnode's data ");
scanf("%d",&newnode->data);
newnode->next=NULL;
if (head==NULL)
head=tail=newnode;
else{
	tail->next=newnode;
	tail=newnode;
}
}
void dequeue(){
	if (head==NULL)
	printf("Queue is empty\n");
	else{
		struct node *temp=head;
		head=head->next;
		printf("The deleted element is %d\n",temp->data);
		free(temp);
	}
}
void traverse(){
	if(head==NULL)
	printf("The Queue is empty\n");
	else{
		struct node *temp=head;
	printf("The elements of Queue are\n");
	while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->next;}
	}
}
void main()
{
	int op;
	while(1){
	printf("Select the option to perform a certain opeartion\n1. Enqueue\n2. Dequeue\n3. Traverse\n4. Exit\n");
	scanf("%d",&op);
	switch(op){
		case 1: enqueue();break;
		case 2: dequeue();break;
		case 3:traverse();break;
		case 4: exit(0);
		default: printf("Please enter a valid option\n");
	}
	}

}
