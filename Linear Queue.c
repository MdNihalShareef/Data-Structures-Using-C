#include<stdio.h>
#include<stdlib.h>
# define size 10
int queue[size];
int front=-1,rear=-1;
void enque(int a)
{ if (rear==size-1)
	printf("Queue is full\n");
  else
{
  queue[++rear]=a;
  if (front==-1)
  front++;
}
}

void deque()
{
	if (front==-1)
	printf("Queue is empty\n");
	else
	{
	printf("The removed element is %d\n",queue[front++]);
	if (front>rear)
	front=-1,rear=-1;
}
}

void display()
{
	if (front==-1)
	printf("Queue is empty\n");
	else
	{	int i;
		printf("The elements in the queue are \n");
		for (i=front;i<=rear;i++)
		printf("%d\n",queue[i]);
	}
	}


void main()
{while(1)
{
	printf("Select the option to perform certain operation on queue\n1. enque\n2. deque\n3. display the elemnts in the queue\n4. exit\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{ case 1:{int b; printf("Enter the element you want to insert in queue ");scanf("%d",&b);enque(b);break;}
		case 2: deque();break;
		case 3: display();break;
		case 4: exit(0);
		default: printf("Please enter a valid option\n");
	}
}	
}
