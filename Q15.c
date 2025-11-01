#include<stdio.h>
int main()
{
    int month , year;
    printf("Enter month number (1-12) and year : ");
    scanf("%d %d",&month,&year);

    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("Month %d has 31 days.\n",month);
    }
    else if (month==4 || month==6 || month==9 || month==11)
    {
        printf("Month %d has 30 days.\n",month);
    }
    else if (month==2)
    {
        if ((year % 400 == 0 ) || (year % 4 == 0 && year % 100 != 0))
        {
            printf("Feburary (%d) has29 days (leap year).\n",year);
        }
        else
        {
            printf("Feburary %d has 28 days.\n",year);
        }
    }
    else
    {
        printf("Invalid input.\n");
    }
    return 0;
}