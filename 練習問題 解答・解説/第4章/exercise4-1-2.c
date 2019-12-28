#include <stdio.h>

int main()
{
    int p;
    scanf("%d", &p);
    
    if (p >= 90)
    {
        printf("AA\n");
    }
    else if (p >= 80 && p <= 89)
    {
        printf("A\n");
    }
    else if (p >= 70 && p <= 79)
    {
        printf("B\n");
    }
    else if (p >= 60 && p <= 69)
    {
        printf("C\n");
    }
    else if (p <= 59)
    {
        printf("D\n");
    }
    return 0;
}