#include<stdio.h>
int main()
{
    int n,i,x,max=-99999;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     scanf("%d",&x);
      if(x>max)
      {
          max=x;
      }
    }
    printf("%d\n",max);
    return 0;
}
