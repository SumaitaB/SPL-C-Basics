int main()
{
    int d,m,days,s;
    scanf("%d%d",&d,&m);
    if(m==1)
    {
        days=0;
    }
    if(m==2)
    {
        days=31;
    }
    else if(m==3)
    {
        days=59;
    }
    else if(m==4)
    {
        days=90;
    }
    else if(m==5)
    {
        days=120;
    }
    else if(m==6)
    {
        days=151;
    }
    else if(m==7)
    {
        days=181;
    }
    else if(m==8)
    {
        days=212;
    }
    else if(m==9)
    {
        days=243;
    }
    else if(m==10)
    {
        days=273;
    }
    else if(m==11)
    {
        days=304;
    }
    else if(m==12)
    {
        days=334;
    }
    s=4+(d-1)+days;
    s=(s%7);
    switch (s)
    {
         case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Saturday\n");
    }
    return 0;
}
