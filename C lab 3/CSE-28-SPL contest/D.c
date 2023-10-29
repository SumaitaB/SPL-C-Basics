#include<stdio.h>
int main()
{
    int x,y,n,j;
        scanf("%d%d%d",&x,&y,&n);
        for(j=1; j<=n; j++)
        {
             if(j%x==0&&j%y==0)
            {
                printf("FizzBuzz\n",j);
            }

            else if(j%x==0)
            {
                printf("Fizz\n",j);
            }
            else if(j%y==0)
            {
                printf("Buzz\n",j);
            }
            else
            {
                printf("%d\n",j);
            }

        }






return 0;
}
