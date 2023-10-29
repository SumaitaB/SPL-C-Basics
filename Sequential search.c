#include<stdio.h>
int main()
{
    int n,a[50],i,j,key,found=0,p[50]={0};
    printf("Enter the length of your list:\n");
    scanf("%d",&n);
    printf("Enter your list:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key:\n");
    scanf("%d",&key);
    for(i=1,j=0; i<=n; i++)
    {
        if(a[i]==key)
        {
            found++;
            p[j]=i;
            j++;
        }
    }
    printf("Key found %d times at the index/indices : ",found);
    for(j=0;j<50;j++)
    {
        if(p[j]!=0)
        {
            printf("%d ",p[j]);
        }
    }
    printf("\n");
    return 0;
}
