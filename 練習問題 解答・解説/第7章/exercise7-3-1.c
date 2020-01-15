#include <stdio.h>

int fibonacci(int); //プロトタイプ宣言

int main()
{
    int a;
    scanf("%d", &a);//整数を受け取る
    printf("%d\n", fibonacci(a));//a_nを出力する
    return 0;
}

int fibonacci(int n)
{
    if (n <= 0)
    {
        return 0;//a_0=0
    }
    else if (n == 1)
    {
        return 1;//a_1=1
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));//a_n=a_(n-1)+a_(n-2)
    }
}