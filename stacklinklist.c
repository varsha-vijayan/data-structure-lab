#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{
int val;
struct node*next;
};
struct node*head;
void main()
{
int choice=0;
printf("stack operation using linked list\n");
while(choice!=4)
{
printf("\nmenu");
printf("\n1.pushed element \n2.poped element \n3.display");
printf("\nenter your choice\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
default:
{
printf("please enter a valid choice");
}
};
}
}
void push()
{
int val;
struct node*ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
printf("not able to push the elements");
}
else
{
printf("enter the value:");
scanf("%d",&val);
if(head==NULL)
{
ptr->val=val;
ptr->next=NULL;
head=ptr;
}
else
{
ptr->val=val;
ptr->next=head;
head=ptr;
}
printf("item pushed");
}
}


void pop()
{
int item;
struct node*ptr;
if(head==NULL)
{
printf("underflow");
}
else
{
item=head->val;
ptr=head;
head=head->next;
free(ptr);
printf("item poped");
}
}


void display()
{
int i;
struct node*ptr;
ptr=head;
if(ptr==NULL)
{
printf("stack is empty\n");
}
else
{
printf("printing stack elements\n");
while(ptr!=NULL)
{
printf("%d",ptr->val);
ptr=ptr->next;
}
}
}

