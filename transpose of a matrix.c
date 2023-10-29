#include<stdio.h>
int main()
{
    int a[3][2],row,col,sum=0,temp=0,b[2][3];

    for(row=0; row<3; row++)
    {
        for(col=0; col<2; col++)
        {
            scanf("%d",&a[row][col]);
        }
    }



    for(row=0; row<3; row++)
    {
        for(col=0; col<2; col++)
        {
            b[col][row]=a[row][col];
        }
    }


    for(row=0; row<2; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ",b[row][col]);
        }
        printf("\n");
    }


    return 0;
}
