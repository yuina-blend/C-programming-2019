#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int ans = 0; //答えの出力用の変数
    
    ans=(a+b)*(b-a+1)/2;
    
    printf("%d\n", ans); //答えを出力
}