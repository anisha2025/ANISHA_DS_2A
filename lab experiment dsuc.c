#include<stdio.h>
void main()
{
int i,n,pos,arr[10];
printf("enter the number of elements in the array");
scanf("%d",&n);
printf("enter the elements in the array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the position of the element you want to delete ");
scanf("%d",&pos);
if(pos<=0)
    printf("not possible");
else
    {
for(i=pos-1;i<n-1;i++){
    arr[i]=arr[i+1];}
n--;
for (i=0;i<=n-1;i++){
printf("%d ",arr[i]);}
}
}

