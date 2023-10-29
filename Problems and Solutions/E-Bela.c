#include<stdio.h>
int main()
{
    char b[2],c[5];
    int n,i,s=0;
    scanf("%d",&n);
    scanf("%s",&b);
    for(i=1; i<=n*4; i++)
    {
        scanf("%s",&c);
        if(c[0]=='A')
        {
            s=s+11;
        }
         else if(c[0]=='K')
        {
            s=s+4;
        }
          else if(c[0]=='Q')
        {
            s=s+3;
        }
            else if(c[0]=='J')
        {
            if(c[1]==b[0])
            {
              s=s+20;
            }
             else
            {
              s=s+2;
            }
        }
           else if(c[0]=='T')
        {
            s=s+10;
        }
             else if(c[0]=='9')
        {
            if(c[1]==b[0])
            {
              s=s+14;
            }
             else
            {
              s=s+0;
            }
        }
            else if(c[0]=='8')
        {
            s=s+0;
        }
            else if(c[0]=='7')
        {
            s=s+0;
        }
    }
    printf("%d",s);
    return 0;
}
