#include<stdio.h>
int main()
{
    int i = 5;
    int *ptr;                      /* declare a pointer variable */
    ptr = &i;                      /* store address-of i to ptr */
    printf("*ptr = %d\n", *ptr);   /* refer to referee of ptr */
    return 0;

}
