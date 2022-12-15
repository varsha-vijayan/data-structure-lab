#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node*link;
};
struct node*head=NULL;



void insertfirst()
{
struct node*ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
printf("\n No space");
}
else
{
printf("enter the element to be inserted:");
scanf("%d",&ptr->data);
ptr->link=NULL;
if(head==NULL)
{
head=ptr;
}
else
{
ptr->link=head;
head=ptr;
}
printf("\n%d inserted into the list",ptr->data);
}
}



void insertlast()
{
struct node*temp,*ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
ptr->link=NULL;
temp=head;
if(ptr==NULL)
{
printf("no space available");
}
else
{
while(temp->link!=NULL)
{
temp=temp->link;
}
printf("\n enter the element to be inserted:");
scanf("%d",&ptr->data);
temp->link=ptr;
printf("%d inserted",ptr->data);
}
}



void insertlocation()
{
int key;
struct node*temp,*ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
ptr->link=NULL;
printf("\n enter the value of node after which the new node to be inserted");
scanf("%d",&key);
temp=head;
while(temp->data!=key)
{
temp=temp->link;
if(temp==NULL)
{
break;
}
}
if(temp==NULL)
{
printf("the %d value not exit",key);
}
if(temp->data==key)
{
if(ptr==NULL)
{
printf("no space");
}
else
{
printf("enter the element to be inserted:");
scanf("%d",&ptr->data);
ptr->link=temp->link;
temp->link=ptr;
printf("\n%d insrted after %d",ptr->data,key);
}
}
}


void deletefirst()
{
struct node*temp;
temp=head;
head=temp->link;
printf("%d deleted",temp->data);
free(temp);
}


void deletelast()
{
struct node*temp,*p;
temp=head;
while(temp->link!=NULL)
{
p=temp;
temp=temp->link;
}
printf("\n%d deleted",temp->data);
free(temp);
p->link=NULL;
}


void deletelocaton()
{
struct node*temp,*p;
int key;
printf(" enter the value of the node to be deleted:");
scanf("%d",&key);
temp=head;
while(temp->data!=key)
{
p=temp;
temp=temp->link;
if(temp==NULL)
break;
}
if(temp==NULL)
{
printf("the %d value not exist",key);
return;
}
if(temp->data==key);
{
printf("%d deleted",temp->data);
p->link=temp->link;
free(temp);
}
}
void search()
{
struct node*temp;
int key,pos=0;
temp=head;
printf("enter the element to be searched");
scanf("%d",&key);
while(temp->data!=key)
{
temp=temp->link;
pos++;
if(temp==NULL)
{
break;
}
}
if(temp==NULL)
{
printf("\n the %d value not exist",key);
return;
}
if(temp->data==key)
{
printf("%d is available in location'%d'",key,pos+1);
}
}


void display()
{
struct node*p;
if(head==NULL)
{
printf("list is empty");
}
else
{
printf("\n elements in link list are:");
p=head;
while(p!=NULL)
{
printf("\t%d",p->data);
p=p->link;
}
}
}


void main()
{
int choice;
printf("\nSINGLY LINKED LIST:");
do
{
printf("\nMENU");
printf("\n\n1.insert at beggining\n2.insert at last\n3.insert at ay random location\n4.delete from begginning\n5.delete from last\n6.delete node after specified locatin\n7.seach for an element\n8.display\n9.exit");
printf("\n enter a choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
insertfirst();
break;
}
case 2: 
{
insertlast();
break;
}
case 3:
{
 insertlocation();
break;
}
case 4: 
{
deletefirst();
break;
}
case 5: 
{
deletelast();
break;
}
case 6: 
{
deletelocaton();
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
while(choice!=9);
} 

 


