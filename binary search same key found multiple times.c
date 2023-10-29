#include<stdio.h>
int main()
{
    int n,a[1000],i,j,key,found=0,mid,hi,lo,p[10000]={0};
    printf("Enter the length of your list:\n");
    scanf("%d",&n);
    printf("Enter your list in ascending order:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=1; i<=n; i++)
    {
        p[i]=0;
    }
    printf("Enter key:\n");
    scanf("%d",&key);
    lo=1;
    hi=n;
    mid=(hi+lo)/2;
    int k=0;
    int flag=0;
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
            p[k]=mid;
            flag=1;
            k++;
        }

        mid=(hi+lo)/2;
    }
    if(flag==1)
    {
        for(i=1;i<=k;i++){
        printf("found at location :%d\n",p[i]);}
    }
    else printf("no found");
    return 0;
}
