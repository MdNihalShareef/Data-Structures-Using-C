//week 4a: WACP to implement stack operations using SLL
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void push()
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter newnode's data ");
	scanf("%d",&newnode->data);
		newnode->next=head;
		head=newnode;
	
}
void pop()
{
	if(head==NULL)
	printf("Stack is Empty\n");
	else{
		struct node *temp=head;
		head=head->next;
		printf("The deleted value is %d\n",temp->data);
		free(temp);
		}
}
void peek(){
	if(head==NULL)
	printf("Stack is empty\n");
	else
	printf("The top most data value of stack is %d\n",head->data);
}
void traverse(){
	if(head==NULL)
	printf("The Stack is empty\n");
	else{
		struct node *temp=head;
	printf("The elements of Stack are\n");
	while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->next;}
	}
}
void main()
{
	int op;
	while(1){
	printf("Select the option to perform a certain opeartion\n1. Push\n2. Pop\n3. Peek\n4. Traverse\n5. Exit\n");
	scanf("%d",&op);
	switch(op){
		case 1: push();break;
		case 2: pop();break;
		case 3: peek();break;
		case 4:traverse();break;
		case 5: exit(0);
		default: printf("Please enter a valid option\n");
	}
	}

}
