#include<stdio.h>
#include<math.h>

int main()
{
    int x , y;
    double exp , sqrt_exp , last_exp;

    printf("Enter two integers : ");
    scanf("%d %d",&x , &y);
    printf("x = %d , y = %d\n",x,y);

    exp = pow(x,3) + 3*pow(x,2) + 4*x - pow(y,3);
    sqrt_exp = sqrt(exp);
    last_exp = sqrt_exp / (2*pow(x,2));

    printf("x^3 + 3x^2 + 4x - y^3 = %.2f\n",exp);
    printf("sqrt(x^3 + 3x^2 + 4x - y^3) = %.2f\n",sqrt_exp);
    printf("sqrt(x^3 + 3x^2 + 4x - y^3) / (2x^2) = %.2f\n",last_exp);

    return 0 ;
}