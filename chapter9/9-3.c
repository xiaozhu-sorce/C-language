#include<stdio.h>
# define NUM 10
int main (void){
    int i;
    int j=0;
    char s[NUM][128];
    for ( i = 0; i < NUM; i++)
    {
        printf("s[%d]:",i); scanf("%s",s[i]);
         if (strcmp(s[i],"$$$$$")==0)
        {
            break;
        }
        j++;
    }
    for ( i = 0; i < j; i++)
    {
        printf("s[%d]=\"%s\"\n",i,s[i]);
    }
    return 0;
}