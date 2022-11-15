#include<stdio.h>
int main()
{
    int a[3][3]= {1,2,3,4,5,6,7,8,9};
    int b[3][3],i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
          b[i][j]= a[j][i];
        }
    }
    printf("Matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Transpose of a given matrix is :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
          printf("%3d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
