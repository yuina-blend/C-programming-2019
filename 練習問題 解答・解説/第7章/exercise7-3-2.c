#include <stdio.h>

long long fibonacci(int); //プロトタイプ宣言

long long memo[70]; //グローバル変数、 要素数は多めに取ってあります

int main()
{
    int a;
    int i;

    //memoの初期化
    for (i = 0; i < 70; i++)
    {
        memo[i] = -1; //-1で初期化
    }

    scanf("%d", &a); //整数を受け取る

    printf("%lld\n", fibonacci(a)); //a_nを出力する
    //long long型は%lldで出力できる
    return 0;
}

long long fibonacci(int n)
{
    if (memo[n] == -1)
    { //a_nが計算されていないなら値を計算する
        if (n <= 0)
        {
            memo[0] = 0; //a_0=0
        }
        else if (n == 1)
        {
            memo[1] = 1; //a_1=1
        }
        else
        {
            memo[n] = fibonacci(n - 1) + fibonacci(n - 2); //a_n=a_(n-1)+a_(n-2)
        }
    }
    return memo[n];
}