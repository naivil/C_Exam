#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int k = i - 1; k <= 5; k++)
        {
            printf("  ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}