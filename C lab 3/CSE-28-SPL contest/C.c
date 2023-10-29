#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("%d is even\n",n);
        }
        else
        {
            printf("%d is odd\n",n);
        }

    }


    return 0;
}
