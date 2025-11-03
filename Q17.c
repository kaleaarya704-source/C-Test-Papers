#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number :");
    scanf("%d",&a);

    if (a % 5 == 0 && a % 7 ==0)
    {
        printf("Hello.\n");
    }
    else
    {
        printf("Bye.\n");
    }
    
    return 0;
}