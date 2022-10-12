#include<stdio.h>
void main()
{
int arr[20],i,n,e,pos;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements in sorted array");
for (i=1;i<=n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the position where you want to insert");
scanf("%d",&pos);
printf("enter the element to be inserted");
scanf("%d",&e);
n++;
for(i=n;i>=pos;i--){
    arr[i+1]=arr[i];
}
 arr[pos]=e;
for (i=1;i<=n;i++){
printf("%d",arr[i]);
}
}
