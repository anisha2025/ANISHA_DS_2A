#include<stdio.h>
void main()
{
    int i,j,m,n;
     scanf("%d%d",&m,&n);
    int arr1[m][n],arr2[m][n],arr3[10][10];
    printf("enter the elements");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr1[i][j]);
        }

    }
     printf("enter the elements");
   for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr2[i][j]);
        }

    }
    for ( i = 0; i < m; i++)
    {
    for ( j = 0; j < n; j++)
    {
    arr3[i][j]=arr2[i][j]-arr1[i][j];
    }

    }
     for ( i = 0; i < m; i++)
    {
    for ( j = 0; j < n; j++)
    {
  printf("%d",arr3[i][j]);
  }printf("\n");
    }
    }
