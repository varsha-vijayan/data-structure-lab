#include<stdio.h>
void main()
{
int i,n,j,k,a1[50],a2[50],a3[100],m;
printf("enter the size of first array :");
scanf("%d",&n);
printf("enter the elements of the first array:");
for(i=0;i<n;i++)
{
scanf("%d",&a1[i]);
}
printf("enter the size of second array :");
scanf("%d",&k);
printf("enter the elements of the second array:");
for(j=0;j<k;j++)
{
scanf("%d",&a2[j]);
}
i=j=0;
for(m=0;m<n+k;m++)
{
if(i<n&&j<k)
{
if(a1[i]<a2[j])
{
a3[m]=a1[i];
i++;
}
else
{
a3[m]=a2[j];
j++;
}
}
else if(i<n)
{
a3[m]=a1[i];
i++;
}
else
{
a3[m]=a2[j];
j++;
}
}
printf("the merged arrayis:");
for(m=0;m<n+k;m++)
{
printf("%d",a3[m]);
}
}
