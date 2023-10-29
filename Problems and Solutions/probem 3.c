#include<stdio.h>
int main()
{
    int n,r=0,s=0,d=0,s1=0,idx,i;
    scanf("%d",&n);
    scanf("%d",&idx);
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=(n-r)/10;
    }
    for(i=1;i<=idx;i++)
    {
         d=s%10;
        if(i==idx)
        {
           s1=d;
        }
        s=(s-d)/10;
    }
    printf("%d\n",s1);
    return 0;
}

