#include<stdio.h>
void main()
{
    int a[10],n,i,e,c=0;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter array element");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    printf(" enter the element to be searched");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(e==a[i])
            c++;
    }
    if (c>0)
        printf("element found ");
    else
        printf("not found");
}
