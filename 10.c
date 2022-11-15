#include<stdio.h>
int main()
{
    int a[3][3], i, j, sum=0, max=0, index=0;

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
        sum=0;
        for(j=0; j<3; j++)
        {
            if(a[i][j]==1)
               sum= a[i][j]+sum;
        }
        if(sum>max)
        {
            max= sum;
            index=i;
        }
    }
    printf("....................\n\n");

    if(max>0)
       printf("Maximum number of 1s is %d in the %d row",max,index+1);
    else
        printf("No any 1 in the row");

    return 0;
}
