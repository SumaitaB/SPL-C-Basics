#include<stdio.h>
int main()
{
    double a=25,b=10,c=16,s,area;
    s=((a+b+c)/2.00);
    area=sqrt((s*(s-a)*(s-b)*(s-c)));
    printf("Area = %lf\n",area);
    return 0;

}
