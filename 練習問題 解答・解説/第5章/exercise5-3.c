#include <stdio.h>

int main()
{
    int i;
    int j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            printf("%3d", j * i); //1  2  3  4  5  6  7  8  9と出力(一回目のiのfor文)
        }
        printf("\n"); //改行される、以降、ニ回目のiのfor文へ
    }
    return 0;
}