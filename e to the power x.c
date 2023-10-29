#include<stdio.h>
int main()
{
    int x,i,e,a=1,f=1,j;
    float b;
    scanf("%d",&x);
    b=x/1.00;
    if(x>=1)
    {
        for(i=1; i<=x; i++)
        {
            for(j=i; j>=1; j--)
            {
                f=f*i*1.00;
                printf("f=%d\n");
            }

        }
        printf("%d\n",b);
    }
    else if(x==0)
    {
        printf("1\n");
    }
    return 0;
}
