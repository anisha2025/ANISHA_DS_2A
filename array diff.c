#include<stdio.h>
void main()
{
  printf("My name is Anisha Verma");
  int a[10],b[10],c[10],i,j,r,t,m,n,k;
  scanf("%d%d",&n,&m);
  printf("first array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("second array");
        for(j=0;j<m;j++)
        {

        scanf("%d",&b[j]);
        }
    k=0;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[i]==b[j])
			{
			    k=k+1;
			    break;
			}
		}
        if(k==0)
            printf( "%d",a[i]);
        else
                continue;
	}
}


