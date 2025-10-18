#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);

    //Addition
    c=a+b;
    printf("Addition = %d\n",c);

    //Subtraction
    c=a-b;
    printf("Subtraction = %d\n",c);

    //Division
    if (b!=0)
    {
        c=a/b;
        printf("Division = %d\n",c);
    }
    else
    {
        printf("Division is not possible as denominator is 0");
    }
    
    return 0;
}