#include<stdio.h>
int main()
{
    int r1,c1,sum=0;
    printf("Enter the no.of rows and columns of first array:\n");
    scanf("%d %d",&r1,&c1);
    int a[r1][c1];
    printf("Enter the elemnts of first matrix:\n");
     for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
          scanf("%d",&a[i][j]);  
        }
    }
     for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
           sum=sum+a[i][j];
        }
    }
    printf("The sum of the elements of the matrix is :\n%d",sum);
}
