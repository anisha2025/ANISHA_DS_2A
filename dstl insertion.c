#include<stdio.h>
void main()
{
  printf("My name is Anisha Verma");
  int a[10],b[10],c[10],i,j,r,t,m,n;
  scanf("%d%d",&n,&m);
  printf("first array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);}
    printf("second array");
        for(j=0;j<m;j++)
        {

        scanf("%d",&b[j]);
        }

        for(i=0;i<n;i++)
            {
        for(j=0;j<m;j++)
        {

            if(a[i]==b[j])
            {
                c[r]=a[i];
                 r++;
            }

        }
    }
    printf("intersection is\n");
    for(i=0;i<r;i++)
    {
        printf("%d ",c[i]);
    }
        }


