#include<stdio.h>

int read(int n)
{
  if(n==1)return 1;
  return n*read(n-1);
}
int main()
{
    int x,res;
    scanf("%d",&x);

    res=read(x);
    printf("%d\n",res);
    return 0;

}
