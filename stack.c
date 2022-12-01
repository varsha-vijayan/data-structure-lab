#include<stdio.h>
int ch,stack[100],i,n,x,top;
void push();
void pop();
void display();
void main()
{
top=-1;
printf("enter the size of the stack[max=100]");
scanf("%d",&n);
printf("STACK OPERATION USING ARRAY");
printf("MENU");
printf("1.push\n2.pop\n3.display\n4.exit");
do
{
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
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
case 4:
{
printf("EXIT POINT");
break;
}
default:
{
printf("please enter a valid choice");
}
}
}
while(ch!=4);
}
void push()
{
if(top>=n-1)
{
printf("\n\tSTACK IS OVRFLOW");
}
else
{
printf("enter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("STACK IS UNDERFLOW");
}
else
{
printf("the popped element is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("the elements in stack");
for(i=top;i>=0;i--)
{
printf("\n%d",stack[i]);
}
printf("press next choice");
}
else
{
printf("\nstack is empty");
}
}

