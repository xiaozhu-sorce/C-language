#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void main()
{
    int i,a;
    char word[5][10];
    char max[10], min[10];
    for (i = 0; i <= 4; i++)
    {
        scanf("%s", word[i]);
    }

    strcpy(max, word[0]);
    strcpy(min, word[0]);

    for (i = 1; i <= 4; i++)
    {
        a = strcmp(max, word[i]);
        if (a < 0)
        {
            strcpy(max, word[i]);

        }
        if (a > 0)
        {
            strcpy(min, word[i]);

        }
    }
    printf("max:%s min:%s", max, min);
}
