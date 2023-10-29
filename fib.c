#include<stdio.h>
int main()
{
    int i,a=0,b=1,c;
    i=1;
    while(i!=12)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",a);
        while(i<11)
        {
            printf(", ");break;
        }
        if(i==11)
        {
            printf("\n");
        }
        i++;
    }
    return 0;
}
