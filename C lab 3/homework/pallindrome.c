#include<stdio.h>
int main()
{
    int n,s=0,r=0,p=0;

        scanf("%d",&n);
        p=n;
         while( p!=0 )
    {
        r = p%10;
        s = s*10 + r;
        p = p/10;
    }

    if(s==n)
    {
    printf("The number entered is a pallindrome.\n");
    }
    else
    {
    printf("The number entered is not a pallindrome.\n");
    }
    return 0;
}
