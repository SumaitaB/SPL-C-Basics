#include<stdio.h>
int main()
{
    int n,i=0,j;
    char arr[100];
    printf("Enter a number in decimal number system\n");
    scanf("%d",&n);
    while(n!=0)
    {
        switch(n%16)
        {
        case 10:
            arr[i]='A';
            break;
        case 11:
            arr[i]='B';
            break;
        case 12:
            arr[i]='C';
            break;
        case 13:
            arr[i]='D';
            break;
        case 14:
            arr[i]='E';
            break;
        case 15:
            arr[i]='F';
            break;
        default:
            arr[i]=(n%16)+0x30;
        }
        n=n/16;
        i++;
    }
    printf("The number in hexadecimal number system = ");

    for (j=i-1; j>=0; j--)
    {
        printf("%c",arr[j]);
    }
    printf("\n");
    return 0;
}
