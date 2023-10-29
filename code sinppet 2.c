#include<stdio.h>
int main()
{
    int x=6,y=10,z=10;
    printf("%d\n",(4+x==y));
    printf("%d\n",y!=z);
    printf("%d\n",(x>y)?x:y);
    printf("%d\n",z+ x++);
    printf("%d\n",y+ ++x);
    printf("%d\n",x=y==z);
    printf("%d\n",(x%2)?x+2:x);
    if(x=20)printf("TRUE\n");
    else printf("FALSE\n");

    return 0;
}
