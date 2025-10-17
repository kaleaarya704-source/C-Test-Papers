#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter two number :");
    scanf("%d  %d",&a,&b);

    //Addition
    printf("Addition = %d\n", a+b);

    //Subtraction
    printf("Subtraction = %d\n",a-b);
    
    //Division [denominator should not equal to 0]
    if (b!=0)
    {
        printf("Division = %d\n",a/b);
    }
    else
        printf("Division not possiblebcz denominator is 0.\n");

    return 0;
}