#include<stdio.h>
void merge(int c[],int p,int q,int r)
{
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    int a[n1],b[n2];
    for(i=1;i<=n1;i++)
    {
        a[i]=c[p+i-1];
    }
    for(j=1;j<=n2;j++)
    {
      b[j]=c[q+j];
    }
    i=j=1;
    for(k=p;k<=r;k++)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
            c[k]=b[j];
             j++;
    }
}
void mergesort(int c[],int p,int r)
    {
        if(p<r)
        {
            int q=(p+r)/2;
            mergesort(c,p,q);
            mergesort(c,q+1,r);
            merge(c,p,q,r);
        }
    }
    void printc(int c[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        printf("%d ",c[i]);
        printf("/n");
    }
    void main()
{
    int c[] = {5,6,1,3,7};
    int n = sizeof(c) / sizeof(c[1]);
    printf("Before sorting array elements are - \n");
    printc(c ,n);
    mergesort(c, 0, n - 1);
    printf("After sorting array elements are - \n");
    printc(c, n);
}
