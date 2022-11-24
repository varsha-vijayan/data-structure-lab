#include<stdio.h>
void main()
{
int a[50],n,x,y,temp;
printf("enter the array size:");
scanf("%d",&n);
printf("enter the array elements");
for(x=0;x<n;x++)
{
scanf("%d",&a[x]);
}
for(x=0;x<=n-1;x++)
{
for(y=0;y<n-x-1;y++)
{
if(a[y]>a[y+1])
{
temp=a[y];
a[y]=a[y+1];
a[y+1]=temp;
}
}
}
printf("/n array after performing bubble sort:");
for(x=0;x<n;x++)
{
printf("%d",a[x]);
}
}

