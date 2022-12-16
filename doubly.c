#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node*prev;
struct node*next;
int data;
};
struct node*head;
void insertion_beginning();
void insertion_last();
void insertion_specified();
void deletion_beginning();
void deletion_last();
void deletion_specified();
void display();
void search();


void main()
{
int choice=0;
while(choice!=9)
{
printf("\n main menu\n");
printf("1.insert in begging\n2.insert at last\n3.insert at any random location\n4.delete from begginging\n5.delete from last\n6.delete node after specified location\n7.search\n8.display\n9.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
insertion_beginning();
break;
}
case 2: 
{
insertion_last();
break;
}
case 3:
{
insertion_specified();
break;
}
case 4: 
{
deletion_beginning();
break;
}
case 5: 
{
deletion_last();
break;
}
case 6: 
{
deletion_specified();
break;
}
case 7: 
{
search();
break;
}
case 8: 
{
display();
break;
}
case 9: 
{
exit(0);
}
default:
{
printf("\n invalid option");
}
}
}
} 
void insertion_beginning()
{
struct node*ptr;
int item;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
printf("\n overflow");
}
else
{
printf("\n enter the data:");
scanf("%d",&item);
if(head==NULL)
{
ptr->next=NULL;
ptr->prev=NULL;
ptr->data=item;
head=ptr;
}
else
{
ptr->data=item;
ptr->prev=NULL;
ptr->next=head;
head->prev=ptr;
head=ptr;
}
printf("\n node inserted\n");
}
}





void insertion_last()
{
struct node*ptr,*temp;
int item;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
printf("\n overflow");
}
else
{
printf("\n enter the data:");
scanf("%d",&item);
ptr->data=item;
if(head==NULL)
{
ptr->next=NULL;
ptr->prev=NULL;
head=ptr;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->prev=temp;
ptr->next=NULL;
}
}
printf("\n node inserted");
}



void insertion_specified()
{
struct node*ptr,*temp;
int item,loc,i;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
printf("\n overflow");
}
else
{
temp=head;
printf("enter the location:");
scanf("%d",&loc);
for(i=0;i<loc;i++)
{
temp=temp->next;
if(temp==NULL)
{
printf("\n There are less thn %d elements",loc);
return;
}
}
printf("\n enter valuue:");
scanf("%d",&item);
ptr->data=item;
ptr->next=temp->next;
ptr->prev=temp;
temp->next=ptr;
printf("\n Node inserted");
}
}

void deletion_beginning()
{
struct node*ptr;
if(head==NULL)
{
printf("\n UNDERFLOW");
}
else if(head->next==NULL)
{
head=NULL;
free(head);
printf("\n Node deleted");
}
else
{
ptr=head;
head=head->next;
head->prev=NULL;
free(ptr);
printf("\n Node deleted");
}
}



void deletion_last()
{
struct node*ptr;
if(head==NULL)
{
printf("\n UNDERFLOW");
}
else if(head->next==NULL)
{
head=NULL;
free(head);
printf("\n Node deleted");
}
else
{
ptr=head;
if(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->prev->next=NULL;
free(ptr);
printf("\n Node deleted");
}
}



void deletion_specified()
{
struct node*ptr,*temp;
int val;
printf("\n Enter the data after which the node is to be deleted:");
scanf("%d",&val);
ptr=head;
while(ptr->data!=val)
ptr=ptr->next;
if(ptr->next==NULL)
{
printf("\n can'tdelete");
}
else if(ptr->next->next==NULL)
{
ptr->next=NULL;
}
else
{
temp=ptr->next;
ptr->next=temp->next;
temp->next->prev=ptr;
free(temp);
printf("\nNode deleted");
}
}



void display()
{
struct node*ptr;
printf("\n the elements are:\n");
ptr=head;
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}


void search()
{
struct node*ptr;
int item,i=0,flag;
ptr=head;
if(ptr==NULL)
{
printf("\n empty list");
}
else
{
printf("\n enter the elements to be serach");
scanf("%d",&item);
while(ptr!=NULL)
{
if (ptr->data==item)
{
printf("\n%d found at location %d",item,i+1);
flag=0;
break;
}
else
{
flag=1;
}
i++;
ptr=ptr->next;
}
if(flag==1)
{
printf("\n item not found");
}
}
}




