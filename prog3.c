#include <stdio.h>
int main()
{
  int r1, c1, sum = 0;
  printf("Enter the no.of rows and columns of first array:\n");
  scanf("%d %d", &r1, &c1);
  int a[r1][c1];
  printf("Enter the elemnts of first matrix:\n");
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  int max = a[0][0];
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      if (a[i][j] > max)
      {
        max = a[i][j];
      }
    }
  }
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      if (a[i][j] == max)
      {
        printf("Index of max is:\n%d %d \n", i, j);
      }
    }
  }
  printf("The greatest element among all the element  of the matrix is :\n%d", max);
}
