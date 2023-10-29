#include<stdio.h>
int main()
{
    int n,a[1000],i,j,key,found=0,mid,hi,lo;
    printf("Enter the length of your list:\n");
    scanf("%d",&n);
    printf("Enter your list in ascending order:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key:\n");
    scanf("%d",&key);
    lo=1;
    hi=n;
    mid=(hi+lo)/2;
    while(lo<=hi)
    {
        if(a[mid]<key)
        {
            lo=mid+1;
        }
        else if(a[mid]>key)
        {
            hi=mid-1;
        }
        else if(a[mid]==key)
        {
            printf("FOUND at location %d\n",mid);break;
        }

        mid=(hi+lo)/2;
    }
    if(lo>hi)
    {
        printf("NOT FOUND\n");
    }
    return 0;
}
