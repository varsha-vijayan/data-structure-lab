#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
void insert();
void delete();
void display();
int queue_array[SIZE];
int front=-1;
int rear=-1;

void main()
{
int choice;
while(choice!=4)
{
printf("\nMENU");
printf("\n1.Insert\n2.delete\n3.Display");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
default:
printf("\n wrong choice");
}
}
}
void insert()
{
int add_item;
if(rear==SIZE-1)
printf("\nQueue overflow");
else
{
if(front==-1)
front=0;
printf("\n enter the value to be inserted:");
scanf("%d",&add_item);
rear=rear+1;
queue_array[rear]=add_item;

}
}
void delete()
{
if(front==-1||front>rear)
{
printf("\n Queue underflow");
return;
}
else
{
printf("\nElement deleted from the queue is %d",queue_array[front]);
front=front+1;
}
}
void display()
{
int i;
if(front==-1)
{
printf("\nQueue is empty");
}
else
{
printf("\n Queue is:\n");
for(i=front;i<=rear;i++)
printf("%d\n",queue_array[i]);
}
}
