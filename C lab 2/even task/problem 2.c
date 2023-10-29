#include<stdio.h>
int main()
{
    int n,i,space,p,k,j;
    scanf("%d",&n);
    space=n-1;
    p=1;
    for(k=1; k<=n; k++)
    {
        for(i=1; i<=space; i++)
        {
            printf(" ");
        }
        for(j=1; j<=p; j++)
        {
            printf("%d ",p);
        }
        printf("\n");
        space--;
        p++;
    }
    return 0;
}
