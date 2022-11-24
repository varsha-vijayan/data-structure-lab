#include<stdio.h>
void main()
{
int a[100],i,n,key,f;
printf("enter the array size:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the search element in an array:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
{
f=1;
break;
}
}
if(f==1)
{
printf("element in the array is found");
}
else
{
printf("element is not found");
}
}

