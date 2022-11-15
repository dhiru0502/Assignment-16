#include<stdio.h>
int main()
{
    int a[3][3]= {1,2,3,4,5,6,7,8,9};
    int b[3][3]= {9,8,7,6,5,4,3,2,1};
    int c[3][3], i,j, k, sum=0;

    printf("1st Matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("-----------------------\n");
    printf("2st Matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
          for(k=0; k<3; k++)
          {
              sum= sum + (a[i][k]*b[k][j]);
          }
          c[i][j] = sum;
          sum= 0;
         }
    }
    printf("The product of two matrices is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
          printf("%d\t ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
