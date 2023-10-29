#include<stdio.h>
int main()
{
    int i,a,b,count=0,j,p=0;

    scanf("%d%d",&a,&b);
    printf("prime numbers from %d to %d are : \n",a,b,count);

    for(i=a; i<=b; i++)
    {
        p=0;

        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                p++;
            }
        }
        if(p==2)
        {
            count++;
            printf("%d\n",i);
        }

    }
    printf("number of prime numbers from %d to %d = %d\n",a,b,count);
    return 0;
}
