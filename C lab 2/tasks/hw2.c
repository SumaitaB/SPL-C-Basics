#include<stdio.h>
int main()
{

    int i,j,k,p,n;
    scanf("%d",&n);
    p=n-1;
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=p; k++)
        {
            printf(" ");
        }
        for(j=1; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
        p--;
    }
    return 0;
}
