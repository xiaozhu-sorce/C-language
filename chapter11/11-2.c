#include<stdio.h>
int main(void){
    int i;
    char str[3][5];
    char *p[3][128];
    for ( i = 0; i < 3; i++)
    {
        printf("a[%d]:",i); scanf("%s",str[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("p[%d]:",i); scanf("%s",p[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("a[%d]=\"%s\"\n",i,str[i]);
    }
        for ( i = 0; i < 3; i++)
    {
        printf("p[%d]=\"%s\"\n",i,p[i]);
    }
return 0;
}