#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    if(n%2==0)
    {

        for(i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                s+=i;
            }
        }
    }
    else if(n%2==1)
    {

        for(i=1; i<n; i++)
        {
            if(i%2==0)
            {
                s+=i;
            }
        }
    }
    printf("%d\n",s);

    return 0;
}
