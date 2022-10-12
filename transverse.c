#include<stdio.h>
void main()
{
int i,n ,k,a[10];
printf("enter the elements");
printf("enter the number of elements");
scanf("%d",&n);
for (i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 printf("transverse of an array is");
 for (k=0;k<n;k++)
 {
 printf("%d",a[k]);
 }
 }
