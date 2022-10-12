#include<stdio.h>
void main()
{
int pos,i,n,arr[20];
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements in array");
for (i=1;i<=n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the position of the element you want to delete");
scanf("%d",&pos);
for(i=pos;i<=n;i++){
    arr[i]=arr[i+1];
}
n--;
for (i=1;i<=n;i++){
printf("%d",arr[i]);}
}

