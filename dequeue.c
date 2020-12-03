#include<stdio.h>
#include<stdlib.h>
# define size 10
int front=-1,rear=-1;
int dequeue[size];
void insertfront(int a);
void insertrear(int a);
void deletefront();
void deleterear();
void display();
void main()
{
	while(1)
	{
	printf("Select the option to perform certain operation on double ended queue\n1. inserting element in front\n2. inserting element at rear\n3. removing element in front\n4. removing element from rear\n5. display the elememts of dequeue\n6. exit\n");
	int op;
	scanf("%d",&op);
	switch(op)
	{
		case 1:
		{
			printf("Enter the elemnt to be inserted ");
			int e;
			scanf("%d",&e);
			insertfront(e);
			break;
		}
		case 2:
		{
			printf("Enter the elemnt to be inserted ");
			int e;
			scanf("%d",&e);
			insertrear(e);
			break;
		}
		case 3:deletefront();break;
		case 4:deleterear();break;
		case 5:display();break;
		case 6:exit(0);
		deafult:printf("Please enter a valid option\n");
	}
	
	}

}

void insertfront(int a)
{
	if(front==0)
	{
		if (rear==size-1)
			printf("dequeue is full");
		else
			printf("Can't insert element at front\n");
	}
	else if(front==-1)
	{
		dequeue[++front]=a;
		rear++;
	}
	else
		dequeue[--front]=a;
}

void insertrear(int a)
{
	if(rear==size-1)
	{
		if (front==0)
			printf("dequeue is full\n");
		else
			printf("Can't insert element at rear\n");
	}
	else if(rear==-1)
	{
		dequeue[++rear]=a;
		front++;
	}
	else
		dequeue[++rear]=a;
}

void deletefront()
{
	if(front==-1)
		printf("dequeue is empty\n");
	else
		{
		printf("The deleted element is %d\n",dequeue[front++]);
		if (front>rear)
			front=-1,rear=-1;
		}
}
void deleterear()
{
	if (rear==-1)
		printf("dequeue is empty\n");
	else
		{
		printf("The deleted element is %d\n",dequeue[rear--]);
		if (rear<front)
		front=-1,rear=-1;
		}
}

void display()
{
	if (front==-1)
		printf("dequeue is empty\n");
	else
		{
			int i;
			printf("The elemets of the dequeue are\n");
			for (i=front;i<=rear;i++)
			printf("%d\n",dequeue[i]);
		}
}
