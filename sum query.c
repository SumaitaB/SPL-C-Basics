#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    int a[n],p[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    p[0]=a[0];
    for(i=0,j=i+1; i<n; i++,j++)
    {
        p[j]=p[i]+a[j];
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",p[i]);

    }
    printf("\n");


    return 0;
}
