#include <stdio.h>

int main()
{
    int r, c;
    for(r=5;r>=1;r--)
    {
        for(c=r;c>=1;c--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

