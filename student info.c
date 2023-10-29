#include<stdio.h>
#include<string.h>
struct studentinfo
{
    char name[100];
    double marks;
    char tempc[100];
};
int main()
{
    struct studentinfo a[1000];
    int i,j,k,temp,n;
    char na[1000];
    printf("Enter the number of students :\n");
    scanf("%d",&n);
    printf("Enter your name and the marks obtained :\n");
    for(i=1; i<=n; i++)
    {
        scanf("%s%lf",&a[i].name,&a[i].marks);
    }

    for (k=1,i=1; i<=n; i++)
    {
        for (j=1; j+1<=n; j++)
        {
            if (strcmp((a[j].name),(a[j+1].name))>0)
            {
                strcpy(a[k].tempc,a[j].name);
                strcpy(a[j].name, a[j+1].name);
                strcpy(a[j+1].name, a[k].tempc);
                k++;
            }

        }
    }

    for(i=1; i<=n-1; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[i].marks<a[j].marks)
            {
                temp=a[i].marks;
                a[i].marks=a[j].marks;
                a[j].marks=temp;
            }
        }
    }
    printf("Names of the students in alphabetical order is as follows :\n");
    for(i=1; i<=n; i++)
    {
        printf("%s\n",a[i].name);
    }
    printf("The obtained marks in descending order is as follows :\n");
    for(i=1; i<=n; i++)
    {
        printf("%.2lf\n",a[i].marks);
    }
    return 0;
}
