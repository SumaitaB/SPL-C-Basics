#include<stdio.h>
int main()
{
    int n,i,p;
    char x='A';
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        if(x<='Z')
        {
            printf("%c",x);
            x++;
        }
        else if(x>'Z')
        {
            x=x-26;
            printf("%c",x);
            x++;

        }

    }
     printf("\n",p);
    return 0;
}
