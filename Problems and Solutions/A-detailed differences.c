#include<stdio.h>
int main()
{
    int n,i,x,j;
    char a[65],b[65];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",a);
        scanf("%s",b);
        x=strlen(a);
        printf("%s\n",a);
        printf("%s\n",b);
        for(j=0; j<=x-1; j++)
        {
         if(a[j]==b[j])
         {
             printf(".");
         }
         else
         {
             printf("*");
         }
        }
         printf("\n\n");
    }
    return 0;
}
