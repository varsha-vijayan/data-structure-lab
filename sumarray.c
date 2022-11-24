#include<stdio.h>
void main()
{
int a[100],i,count,sum=0;
printf("Enter the array size:");
scanf("%d",&count);
printf("Enter the array elements:");
for(i=0;i<=count;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=count;i++)
{
sum=sum+a[i];
}
printf("The sum of the array is:%d",sum);
}

