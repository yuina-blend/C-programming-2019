#include <stdio.h>

double ave(double, double, double); //プロトタイプ宣言

int main()
{   
    printf("%lf\n",ave(1.0,2.5,4.0));
    return 0;
}

double ave(double a, double b, double c) 
{
    return (a+b+c)/3;
}
