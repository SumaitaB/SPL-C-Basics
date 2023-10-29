#include <stdio.h>
#include<math.h>
int isprime(int n)
{
    int i,count=0;
    if(n==1) return 1;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i;
    for(i=1; i<=20; i++)
    {
        printf("%d",i);
        if(isprime(i))
        {
            printf("*");
        }
        if(i==10||i==20)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}
