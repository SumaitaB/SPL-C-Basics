#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    scanf("%d",&n);
    //array size must be even
    if(n%2==0)
    {
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0,j=i+1;i<n;i=i+2,j=j+2)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
    }

    return 0;
}
