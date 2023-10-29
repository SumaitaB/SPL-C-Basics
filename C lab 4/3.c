#include<stdio.h>


int main()
{
    int arr[10][10],n,m,i,j,s=0;
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
            s=s+arr[i][j];
        }
    }
   printf("sum = %d\n",s);
    return 0;
}

