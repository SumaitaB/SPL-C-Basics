#include<stdio.h>
int main()
{
    int row,col,k,m,n,p,q;

    printf("Enter the order of first matrix\n");
    scanf("%d%d",&m,&n);

    int a[m][n];

    printf("Enter the order of second matrix\n");
    scanf("%d%d",&p,&q);

    int b[p][q];
    int c[m][q];

    if(n==p)
    {

        printf("Enter first matrix\n");

        for(row=0; row<m; row++)
        {
            for(col=0; col<n; col++)
            {
                scanf("%d",&a[row][col]);
            }
        }
        printf("Enter second matrix\n");

        for(row=0; row<p; row++)
        {
            for(col=0; col<q; col++)
            {
                scanf("%d",&b[row][col]);
            }
        }

        for(row=0; row<m; row++)
        {
            for(col=0; col<q; col++)
            {
                c[row][col]=0;

                for(k=0; k<n; k++)
                {
                    c[row][col]+=a[row][k]*b[k][col];
                }
            }
        }
        printf("Product of the two matrices is \n");
        for(row=0; row<m; row++)
        {
            for(col=0; col<q; col++)
            {
                printf("%d ",c[row][col]);
            }
            printf("\n");


        }
    }
    else
    {
        printf("The matrices cannot be multiplied since the column of the first matrix is not equal to the row of the second.\n");
    }

    return 0;
}
