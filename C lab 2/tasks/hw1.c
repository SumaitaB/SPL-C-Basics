#include<stdio.h>
int main()
{
    long long int t,i,n,r,j,count=0;
    double x=0;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        count=0;
        r=0;
        x=0;
        scanf("%lld",&n);

        while(n!=0)
        {

            r=n%10;
            x+=r;
            n=n/10;
            count++;

        }
        x=x/(count*1.00);
        printf("Case %lld: %.2lf\n",i,x);
    }
    return 0;
}
