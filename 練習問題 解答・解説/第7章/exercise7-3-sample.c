#include <stdio.h>

int fact(int); //プロトタイプ宣言

int main()
{
    printf("%d\n", fact(4));
    return 0;
}

int fact(int a)
{
    if (a < 1)
    {
        return 1; //1!=1
    }
    else
    {
        return a * fact(a - 1); //n!=n*(n-1)!
    }
}