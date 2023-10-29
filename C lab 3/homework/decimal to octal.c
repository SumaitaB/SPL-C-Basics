#include<stdio.h>
int main()
{
    int n,i=0,j,arr[1000];

    printf("Enter a number in decimal number system\n");
    scanf("%d",&n);

    while(n!=0)
    {
        arr[i]=n%8;
        n=n/8;
        i++;
    }
    printf("The number in octal number system = ");
    for (j=i-1; j>=0; j--)
    {
        printf("%d",arr[j]);
    }
    printf("\n");
    return 0;
}
