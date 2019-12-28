#include <stdio.h>

int main()
{
    int m;
    int ans = 0;
    scanf("%d", &m);
    switch (m)
    {
    case 1:
        ans = 31;
        break;
    case 2:
        ans = 29;
        break;
    case 3:
        ans = 31;
        break;
    case 4:
        ans = 30;
        break;
    case 5:
        ans = 31;
        break;
    case 6:
        ans = 30;
        break;
    case 7:
        ans = 31;
        break;
    case 8:
        ans = 31;
        break;
    case 9:
        ans = 30;
        break;
    case 10:
        ans = 31;
        break;
    case 11:
        ans = 30;
        break;
    case 12:
        ans = 31;
        break;
    }
    printf("%d\n", ans);
    return 0;
}