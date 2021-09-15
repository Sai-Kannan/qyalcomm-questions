#include<stdio.h>
#include<stdlib.h>
typedef struct sll       
{
	int data;
	struct sll *link;
}node;
node *first=NULL;
node *last=NULL;
void create(int ele)
	{
		node*ptr=(node*)malloc(sizeof(node));
		ptr->data=ele;
		ptr->link=NULL;
		if(first==NULL)
		{
			first=ptr;
			last=ptr;
		}
		else
		{
			last->link=ptr;
			last=ptr;
		}
		
	}
	
void display()
{
	node *temp=first;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
	free(temp);
}
void print_reverse(node *head)
{
    if(head->link!=NULL)
    {
	print_reverse(head->link);
	}
	printf("%d\n",head->data);
}

int main()
{
	create (10);

	create (20);
	create (30);
	create (40);
	printf("in sequence\n");
	display();
	printf("in reverse order\n");
	print_reverse(first);
}


