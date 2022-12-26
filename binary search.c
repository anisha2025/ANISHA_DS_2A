#include <stdio.h>
void main()
{
int mid,low,high,x,arr[20],n,i;
print("enter the elements in array");
printf("enter number of elements");
scanf("%d",&n);
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the element to be found");
scanf("%d",&x);
low=arr[0];
high=arr[n-1];
mid = (low + high)/2;
for (i=0;i<n;i++)
    if (x == arr[mid])
        {
        printf("found %d",i);
        }
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1;
    else                       // x is on the left side
        high = mid - 1;
   printf("element found %d",i);
        }
