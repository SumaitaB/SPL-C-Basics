#include<stdio.h>
int main()
{
    int l,d,x,n,m,r=0,p=0,t=0,i,j;
    scanf("%d",&l);
    scanf("%d",&d);
    scanf("%d",&x);
    for(i=l; i<=d; i++)
    {
        t=0,r=0;
        p=i;
        while(p!=0)
        {
            r=p%10;
            t+=r;
            p=p/10;
        }
        if(x==t)
        {
            n=i;
        }
        if(x==t)break;
    }

    for(j=d; j>=l; j--)
     {
         t=0,r=0;
         p=j;
         while(p!=0)
         {
             r=p%10;
             t+=r;
             p=p/10;
         }
         if(t==x)
         {
            m=j;
         }
          if(t==x)break;
     }
     printf("%d\n%d\n",n,m);
    return 0;
}
