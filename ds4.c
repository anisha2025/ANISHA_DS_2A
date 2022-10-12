#include<stdio.h>
void main()
{
int i,j,m,n;
 printf("enter the no of rows and column in matrix a");
 scanf("%d %d",&m,&n);
int a[3][3],b[3][3];
printf("enter the elements in matrix a");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}}

printf("enter the elements in matrix b");
for(i=0;i<3;i++)
{
for (j=0;j<3;j++){
        scanf("%d",&b[i][j]);
}
}

int k,d[3][3];
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        d[i][j]=0;
    for(k=0;k<3;k++){

    d[i][j]+=a[i][k]*b[k][j];}
   printf("%d",d[i][j]); }

   printf("\n");
   }



 int t[100][100];
printf("\nTranspose of the matrix:\n");
  for ( i = 0; i < m; ++i){
  for (j = 0; j < n; ++j) {
      t[j][i]=d[i][j];}}

 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
      printf("%d",&t[i][j]);
}

