#include<stdio.h>
# define NUM 10
int main (void){
    int i;
    int j=0;
    char s[NUM][128];
    char str[1]="$$$$$";
    for ( i = 0; i < NUM; i++)
    {
        printf("s[%d]:",i); scanf("%s",s[i]);
         if (s[i]==str[1])
        {
            break;
        }
    }
    for ( i = 0; i < j; i++)
    {
        printf("s[%d]=\"%s\"\n",i,s[i]);
    }
    return 0;
}