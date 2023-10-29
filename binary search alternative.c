#include<stdio.h>
int main()
{
    int n,a[1000],i,j,key,found=0,mid,hi,lo,flag=0,loc;
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
    flag=0;
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
            loc=mid;
           flag=1;break;
        }

        mid=(hi+lo)/2;
    }
    if(flag==1)
    {
        printf("found at location %d\n",loc);
    }
    else
    {
        printf("NOT FOUND\n");
    }
    return 0;
}
