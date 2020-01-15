#include <stdio.h>
#include <math.h>

void isPrime(int); //プロトタイプ宣言

int main()
{
    isPrime(2147483646);
    return 0;
}

void isPrime(int a)
{
    int flag = 0;
    int i;
    for (i = 2; i <= sqrt(a); i++) //sqrt(a):aの正の平方根をdouble型で返す
    {
        if (a % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("prime\n");
    }
    else
    {
        printf("not prime\n");
    }
}