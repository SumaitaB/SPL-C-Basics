#include<stdio.h>
int main()
{
    int i,j,k,star,space,n;
    scanf("%d",&n);
    space=n-1;
    star=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=space; j++)
        {
        printf(" ");
        }
        for(k=1; k<=star; k++)
        {
        printf("* ");
        }
        space--;
        star++;
        printf("\n");

    }
       for(i=1,star=n-1,space=1; i<=n; i++)
    {
        for(j=1; j<=space; j++)
        {
        printf(" ");
        }
        for(k=1; k<=star; k++)
        {
        printf("* ");
        }
        space++;
        star--;
        printf("\n");

    }

    return 0;
}
