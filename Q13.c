#include<stdio.h>
int main()
{
    float a , b , c;
    printf("Enter three sides of triangle : ");
    scanf("%f %f %f",&a , &b ,&c);

    if (a > 0 && b > 0 && c > 0)
    {
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            if (a==b && b==c)
            {
                printf("Triangle is equilateral.\n");
            }
            else if (a==b || b==c || a==c)
            {
                printf("Triangle is isosceles.\n");
            }
            else
            {
                printf("Triangle is scalene.\n");
            } 
        }
        else
        {
            printf("Triangle is not valid (triangle inequality is not satisfied).\n");
        }
    }
    else
    {
        printf("Triangle is not valid (sides must be positives).\n");
    }
    return 0;
}