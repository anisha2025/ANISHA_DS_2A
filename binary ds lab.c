#include<stdio.h>
void main()
{
int i,n, arr[100], search, first, last, middle, temp;
printf("enter number of elements");
    scanf("%d", &n);
    printf("enter the element to be searched");
    scanf("%d",&search);
    printf("enter sorted array");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
       }
    first = 0;
    last = n-1;
    while(first <= last)
    {
        middle = (first+last)/2;
        if(arr[middle]<search)
            first = middle+1;
        else if(arr[middle]==search)
        {
            printf("number found at %d", middle+1);
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        printf("number not found");
   }
