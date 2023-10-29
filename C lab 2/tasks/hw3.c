#include<stdio.h>
int main()
{
    int i,j,k,p=1,q=1,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=q; k++)
        {
            printf("*");
        }
        printf("\n");
        p++;
        q++;
    }
    return 0;
}
