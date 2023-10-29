#include<stdio.h>
int main()
{
    int st[50],i,j,gr[11],freq[12]= {0},p,k;
    for(i=0; i<50; i++)
    {
        scanf("%d",&st[i]);
    }
    printf("GROUP RANGE FREQUENCY\n");
    for(i=0; i<11; i++)
    {
        gr[i]=i+1;
    }
    for(i=0; i<50; i++)
    {
        for(j=0,p=9; p<=100; j=j+10,p=p+10)
        {
            if(st[i]>=j&&st[i]<p)
            {
                freq[j]++;
            }
        }

    }
    for(k=0,j=0,p=9;k<11;k++,j=j+10,p=p+10)
    {
    printf("%d     %d to %d     %d\n",gr[k],j,p,freq[k]);
    }

    return 0;
}
