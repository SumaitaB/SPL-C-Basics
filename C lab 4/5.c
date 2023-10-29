#include<stdio.h>


int main()
{
    int arr[10][10],n,m,i,j,s[15];
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            s[i]+=arr[j][i];
        }
    }
     for(i=0; i<n; i++)
    {
          printf("%d\n",s[i]);
    }
    return 0;
}

