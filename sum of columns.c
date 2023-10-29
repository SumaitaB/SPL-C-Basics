#include<stdio.h>
int main()
{
    int a[2][3],row,col,sum=0;

    for(row=0; row<2; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d",&a[row][col]);
        }
    }

    for(col=0; col<3; col++)
    {
        sum=0;

        for(row=0; row<2; row++)
        {
            sum+=a[row][col];
        }

        printf("sum is %d\n", sum);

    }

    return 0;
}
