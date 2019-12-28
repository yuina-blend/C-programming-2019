#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int ans = 0; //答えの出力用の変数
    int i = 0;
    for (i = a; i <= b; i++)
    { //iをaからはじめて、b以下の間、繰り返すごとにiの値を1づつ増やす
        ans += i;
    }
    printf("%d\n", ans); //答えを出力
}