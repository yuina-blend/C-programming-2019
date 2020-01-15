#include <stdio.h>

void isPrime(int); //プロトタイプ宣言

int main()
{
    isPrime(3);
    return 0;
}

void isPrime(int a)
{
    int flag = 0;
    int i;
    for (i = 2; i < a; i++)
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