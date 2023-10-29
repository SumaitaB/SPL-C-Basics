#include<stdio.h>
#include<stdlib.h>
void swap(int *x, int *y,int *z)
{

    int temp1,temp2;
    temp1 = *x;
    temp2=*y;
    *x=*z;
    *z=temp2;
    *y = temp1;
    return;
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    printf("before swap : %d %d %d\n",x,y,z);
    swap(&x,&y,&z);
    printf("after swap  : %d %d %d\n",x,y,z);
    return 0;
}

