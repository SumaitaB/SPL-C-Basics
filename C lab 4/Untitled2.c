
#include<stdio.h>
void input(int n,int m, int arr[10][10])
{
    int i,j;
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    return arr[n][m];
     for(i=0; i<n; i++)
     {
         for(j=0; j<m; j++)
         {
             printf("%d ",arr[i][j]);
         }
         printf("\n");
     }
}


    int main()
    {
        int a[10][10],i,j,n,m,r;
        input(n,m,a[n][m]);

        return 0;
    }

