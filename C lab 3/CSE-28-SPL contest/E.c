#include<stdio.h>
int main()
{
    int a,b,r1=0,r2=0,p=0,q=0;

        scanf("%3d%3d",&a,&b);
        if(a!=b)
        {

         while( a!=0 )
    {
        r1 = a%10;
        p = p*10 + r1;
        a = a/10;
    }
     while( b!=0 )
    {
        r2 = b%10;
        q = q*10 + r2;
        b = b/10;
    }
    if(p>q)
    {
        printf("%d\n",p);
    }
    else if(p<q)
    {
        printf("%d\n",q);
    }
        }
return 0;
}
