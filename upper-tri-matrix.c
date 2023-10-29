#include<stdio.h>

#define row 3
#define col 3

int main()
{
    int r=0,c=0;
    int a[row][col]= {{0,1,2},{3,4,5},{6,7,8}};
    for(r=0; r<row; r++)
    {
        for(c=0; c<col; c++)
        {
            if(r<=c)
                printf("%d\t",a[r][c]);
        }
        printf("\n");
    }
    return 0;
}
