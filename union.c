#include<stdio.h>
int main()
{
   printf("My name is Anisha Verma");
   int a[10],b[10],i,c[10],j,k=0,n,m;
   scanf("%d%d",&m,&n);
   printf("first array");
   for (i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("second array");
   for(i=0;i<m;i++)
   {
     scanf("%d",&b[i]);
   }
   for(i=0;i<n;i++)
   {

      for(j=0;j<k;j++)
      {
         if(c[j]==a[i])
            break;
       }
       if(j==k)
       {
          c[k]=a[i];
          k++;
       }
    }
   for(i=0;i<m;i++)
   {
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k)
     {
       c[k]=b[i];
       k++;
     }
   }
   for(i=0;i<k;i++)
    {
         printf("%d ",c[i]);
    }
   }
