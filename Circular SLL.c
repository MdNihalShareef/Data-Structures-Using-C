#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL, *tail=NULL;
void create()
{
	struct node *newnode;
	int a,i=0;
	printf("Enter the no. of nodes you want to create ");
	scanf("%d",&a);
	for(i;i<a;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter newnode's data ");
		scanf("%d",&newnode->data);
		if (head==NULL)
		{head=tail=newnode;
		newnode->next=newnode;}
		else
		{
			tail->next=newnode;
			newnode->next=head;
			tail=newnode;
		}
	}
}
void insertatbegin()
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter newnode's data ");
	scanf("%d",&newnode->data);
	if (head==NULL)
	{
		head=tail=newnode;
		newnode->next=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->next=head;
		head=newnode;
	}
	}
void insertatend()
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter newnode's data ");
	scanf("%d",&newnode->data);
	if (head==NULL)
	{
		head=tail=newnode;
		newnode->next=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->next=head;
		tail=newnode;
	}
}

void insertatpos()
{	printf("This function can't insert node in head/tail position\n");
	int position,count;
	struct node *newnode=(struct node *)malloc(sizeof(struct node)), *pretemp, *temp;
	printf("Enter position to insert and data ");
	scanf("%d%d",&position,&newnode->data);
	if(head==NULL)
	{
		head=tail=newnode;
		head->next=newnode;
	
	}
	
	else
	{
		temp=head;
		count=1;
	for(count=1,temp=head;count<position;pretemp=temp,temp=temp->next)
	count++;
	pretemp->next=newnode;
	newnode->next=temp;
	}
	
}
void deleteatbegin()
{
	if (head==NULL)
	printf("CSLL is empty\n");
	else
	{
		tail->next=head->next;
		free(head);
		head=tail->next;
	}
}
void deleteatend()
{
	if (head==NULL)
	printf("CSLL is empty\n");
	else
	{struct node *temp, *pretemp;
		for(temp=head;temp->next != tail;temp=temp->next)
		{
			}	
	temp->next=head;
	free(tail);
	tail=temp;
	}
}
void deleteatpos()
{
	printf("This fucntion can't delete the head/tail node\n");
	if (head==NULL)
	printf("CSLL is empty\n");
	else
	{
		struct node *temp, *pretemp;
		int count,position;
		printf("Enter the position of node you want to delete ");
		scanf("%d",&position);
		for(temp=head,count=1;count<position; pretemp=temp, temp=temp->next, count++);
		pretemp->next=temp->next;
		free(temp);
			
	}
}
void traverse()
{
	struct node *temp=head;
	if (head==NULL)
	printf("CSLL is empty\n");
	else
	{
		printf("The elements of CSLL are \n");
		do
		{
			printf("%d\n",temp->data);
			temp=temp->next;	
		}while(temp!=head);
	}
}


void main()
{
	int a;
	while (1)
	{
		printf("Select the option to perform certain operation\n1. Create given no. of nodes and insert all in end\n2. Insert at begin\n3. Insert at end\n4. Insert in middle\n5. Delete at front\n6. Delete at End\n7. Delete in middle\n8. Traverse\n9.Exit\n");
		scanf("%d",&a);		
		switch(a)
		{	
			case 1:create();break;
			case 2:insertatbegin();break;
			case 3:insertatend();break;
			case 4:insertatpos();break;
			case 5:deleteatbegin();break;
			case 6:deleteatend();break;
			case 7:deleteatpos();break;
			case 8:traverse();break;
			case 9:exit(0);
			default:printf("Please enter a valid option\n");
		}
	}
}
