#include<stdio.h>
void main()
{
int i,n ,k,a[10];
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements \n");
for (i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
 printf("reverse of an array is\n");
 for (k=n-1;k>=0;k--)
 {
 printf("%d ",a[k]);
 }
 }
