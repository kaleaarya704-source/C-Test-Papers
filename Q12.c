#include<stdio.h>
int main()
{
    float a , b , c ;
    printf("Enter three anglesof triangle : ");
    scanf("%f %f %f",&a , &b , &c);

    if (a > 0 && b > 0 && c > 0)
    {
        if (a + b + c == 180)
        {
            printf("Triangle is valid.\n");
        }
        else
        {
            printf("Triangle is not valid(sum is not 180).\n");
        }
    }
    else
    {
        printf("Triangle is not valid(angle is not valid).\n");
    }
    
    return 0 ;
}