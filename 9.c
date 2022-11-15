#include<stdio.h>
int main()
{
    int a[3][3], i, j, count=0;

    printf("Enter the element of matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
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

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j]!=0)
               count++;
        }
    }
    printf("....................\n\n");

    if(count<9/2)
       printf("Matrix is sparse");
    else
        printf("Matrix is dense");

    return 0;
}
