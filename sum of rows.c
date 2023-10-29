#include<stdio.h>
int main()
{
    int a[3][2],row,col,sum=0;

    for(row=0; row<3; row++)
    {
        for(col=0; col<2; col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
        for(row=0; row<3; row++)
    {
        sum=0;
        for(col=0; col<2; col++)
        {
            sum+=a[row][col];
        }
        printf("sum of row is %d\n",sum);
    }

    return 0;
}
