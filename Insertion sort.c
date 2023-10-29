#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[1000],i,j,temp,x;
    printf("Enter the length of your list:\n");
    scanf("%d",&n);
    printf("Enter the upper limit (inclusive) of random number selection:\n");
    scanf("%d",&x);
    for(i=0; i<n; i++)
    {
        a[i]=(rand()%(x+1));
    }
    printf("Unsorted list : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nSorted list   : ");
    for(i=0; i<n; i++)
    {
        for(j=i-1; j>=0; j--)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            else
            {
                break;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
