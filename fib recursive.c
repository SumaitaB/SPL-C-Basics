#include<stdio.h>

int read(int n)
{
  if(n==1)return 1;
  if(n==2)return 1;
  return read(n-1)+read(n-2);
}
int main()
{
    int x,res,i;
    scanf("%d",&x);
     for(i=1;i<=x;i++){
    res=read(i);
    printf("%d",res);
    if(i!=x)
    {
        printf(" ");
    }
    else if(i==x)
    {
        printf("\n");
    }
     }
    return 0;

}
