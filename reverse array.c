#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    j=n-1;
    for(i=0; i<n/2; i++)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");

    return 0;
}
