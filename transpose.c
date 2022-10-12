#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], m,n,i,j;
  printf("Enter rows and columns: ");
  scanf("%d %d", &m, &n);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for ( i = 0; i < m; ++i)
  for (j = 0; j < n; ++j) {
    scanf("%d", &a[i][j]);
  }



  // computing the transpose
  for ( i = 0; i < m; ++i)
  for ( j = 0; j < n; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < m; ++i)
  for (int j = 0; j < n; ++j) {
    printf("%d  ", transpose[i][j]);

  }

}
