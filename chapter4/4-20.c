#include<stdio.h>
int main (void){
    int  i,j;
    printf(" |");
    for ( i = 1; i < 10; i++)
    {
        printf("%3d",i);
    }
    printf("\n");
    printf("----------------------------");
    putchar('\n');
    for ( i = 1; i < 10; i++)
    {
        printf("%d|",i);
        for ( j = 1; j < 10; j++)
        {
            printf("%3d",i*j);
        }
        printf("\n");
    }
    return 0;
}