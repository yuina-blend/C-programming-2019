#include <stdio.h>

int main()
{
    int p;
    scanf("%d", &p);
    if (p >= 90)
    {
        printf("AA\n");
    }
    else if (p >= 80)
    {
        printf("A\n");
    }
    else if (p >= 70)
    {
        printf("B\n");
    }
    else if (p >= 60)
    {
        printf("C\n");
    }
    else
    {
        printf("D\n");
    }
    return 0;
}