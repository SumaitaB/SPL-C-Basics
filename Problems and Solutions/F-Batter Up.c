#include <stdio.h>

int main()
{
    int n,i,m,count=0;
    double s=0.0;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf("%d",&m);
        if (m>=0)
        {
            count++;
            s+=m;
        }
    }
    printf("%.16f\n", s/count);
    return 0;
}

