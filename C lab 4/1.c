#include<stdio.h>
int main()
{
    int arr[10][10],n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

