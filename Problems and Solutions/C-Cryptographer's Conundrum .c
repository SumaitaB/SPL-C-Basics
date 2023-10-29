#include<stdio.h>
#include<string.h>
int main()
{
    char a[500];
    int x,d=0,j;
    scanf("%s",&a);
    x=strlen(a);
    for (j=0; j<x; j++)
    {
        if (j%3==0)
        {
            if(a[j]!='P')
            {
            d++;
            }
        }
        if (j%3==1)
        {
             if(a[j]!='E')
            {
            d++;
            }
        }
        if (j%3==2)
        {
           if(a[j]!='R')
            {
            d++;
            }
        }
    }
    printf("%d\n",d);
    return 0;
}
