#include<stdio.h>
int i,hashtable[10],size=10;
void linearprobing(int value, int index){
	int a=(index+1)%10;
	while(hashtable[a]!=-1){
		if (a!=size-1)
		a++;
		else
		a=0;
	}
	hashtable[a]=value;
}
void hashfunction(int a){
	int index=a%10;
	if (hashtable[index]==-1)
	hashtable[index]=a;
	else
	linearprobing(a,index);
}
void traverse(){
	printf("| Index\t| Value\t|\n"); 	
	for(i=0;i<size;i++)
	printf("| %d\t|  %d\t|\n",i,hashtable[i]);
}
void main(){
	int a,n;	
	for(i=0;i<size;i++)
	hashtable[i]=-1;
	printf("Enter the no. of elements of hash table ");
	scanf("%d",&a);
	printf("Enter the elements ");
	for(i=0;i<a;i++)
	{
		scanf("%d",&n);
		hashfunction(n);
		}	
	traverse();
}
