#include<stdio.h>
int main()
{
    int a[2][3],b[2][3],c[2][3],row,col,sum=0,temp=0;
    printf("Enter first matrix\n");

    for(row=0; row<2; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    printf("Enter second matrix\n");

    for(row=0; row<2; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d",&b[row][col]);
        }
    }



    for(row=0; row<2; row++)
    {
        for(col=0; col<3; col++)
        {
            c[row][col]=a[row][col]+b[row][col];
        }
    }
    printf("\n");
    for(row=0; row<2; row++)
    {

        for(col=0; col<3; col++)
        {
            printf("%d ",c[row][col]);
        }
        printf("\n");
    }



    return 0;
}
