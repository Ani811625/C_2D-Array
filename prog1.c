#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("Enter the no.of rows and columns of first array:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the no.of rows and columns of first array:\n");
    scanf("%d %d",&r2,&c2);
    int a[r1][c1],b[r2][c2];
    printf("Enter the elemnts of first matrix:\n");
     for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
          scanf("%d",&a[i][j]);  
        }
        printf("\n");
    }
     printf("Enter the elemnts of second  matrix:\n");
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
          scanf("%d",&b[i][j]);  
        }
        printf("\n");
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            a[i][j]=a[i][j]+b[i][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}