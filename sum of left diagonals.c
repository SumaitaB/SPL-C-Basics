#include<stdio.h>
int main()
{
    int a[3][3],row,col,sum=0;

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d",&a[row][col]);
        }
    }

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            if(row==col)
            {
            sum+=a[row][col];
            }
        }


    }
     printf("sum is %d\n", sum);

    return 0;
}
