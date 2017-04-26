#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL;
struct node *newnode,*currentnode,*frontnode,*ptr;

void create()
{
	
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data \n");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(head==NULL)
		{
			head=newnode;
			currentnode=newnode;
		}
		else
		{
			currentnode->link=newnode;
			currentnode=newnode;
		}
	currentnode->link=NULL;
}
void insert_front()
{
	struct node *p;
	frontnode=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the data of front node \n");
	scanf("%d",&frontnode->data);
	p=head;
	
	head=frontnode;
	head->link=p;
	
	
	
		
}
void insert_end()
{
	struct node *endnode;
	endnode=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the data of end node\n");
	scanf("%d",&endnode->data);
	currentnode->link=endnode;
}
void insert_any()
{
	struct node *anynode;
	int key;
	ptr=head;
	printf("\n enter the key value\n");
	scanf("%d",&key);
	anynode=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the data of any node\n");
	scanf("%d",&anynode->data);
	while((ptr->data!=key)&&(ptr->link!=NULL)) 
	{
		ptr=ptr->link;
	}
	if(ptr->link==NULL)
	{
		printf("\n key is not available");
	}
	else
	{
		anynode->link=ptr->link;
		ptr->link=anynode;
	}

}
void delete_front()
{
	
	ptr=head->link;
	head=ptr;
}
void delete_end()
{
	struct node *ptr1;
	ptr=head;	
	while(ptr->link!=NULL)
	{
		ptr1=ptr;
		ptr=ptr->link;
	}
	ptr1->link=NULL;
		

}
void delete_any()
{
	int key;
	struct node *ptr1;
	ptr=head;
	printf("\n enter the key\n");
	scanf("%d",&key);
	while(ptr!=NULL)
	{
		if(ptr->data!=key)
		{
			ptr1=ptr;
			ptr=ptr->link;
		}
		else
		{
			ptr1->link=ptr->link;
		}
	}
}	
void display()
{
	struct node *display;
	display=head;
	while(display!=NULL)
	{
		printf("%d->\n",display->data);
		display=display->link;
	}
}
void main()
{
	int t;	
	do
	{
		create();
		printf("\n press 0 to stop\n");
		scanf("%d",&t);	
	}while(t!=0);
	//insert_front();
	//insert_end();
	//insert_any();
	//delete_front();
	//delete_end();
	delete_any();
	printf("The linked list is...\n");
	display();
}
	




