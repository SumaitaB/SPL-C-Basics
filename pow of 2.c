#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,s;
    do
    {
        s=pow(2,i);
        if(i!=8){
        printf("%d",s);}
        while(i!=10&&i!=8)
        {
            printf(", ");
            break;
        }
        i++;
    }
    while(i!=11);
      if(i==11)
        {
            printf("\n");
        }
    return 0;
}
