#include<stdio.h>
int main()
{
    int a[3][3]= {1,2,3,4,5,6,7,8,9}, i, j, sum=0;

    printf("Matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
             if(i+j==2)
               sum= sum + a[i][j];
        }
    }
    printf("\n");
    printf("Sum of left diagonals of a matrix is: %d",sum);
    return 0;
}
