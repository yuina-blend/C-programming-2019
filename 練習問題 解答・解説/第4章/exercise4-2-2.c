#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int ans = a - b;
    if (ans < 0)
    {
        ans = ans * -1;
    }
    printf("%d\n", ans);
    return 0;
}