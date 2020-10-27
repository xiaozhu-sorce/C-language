#include<stdio.h>
#include<string.h>
#define NUM1 4
#define NUM2 128
void put_strary(char s[][NUM2],int n)
{
    int i=0;
    for ( i = 0; i < n; i++)
    {
        if((strcmp(s[i],"$$$$$"))==0)
        {
            break;
        }
        else
        {
            printf("%s",s[i]);
        }
        printf("\n");
    }
}
int main (void)
{
    char s[NUM1][NUM2];
    int i=0;
    printf("请输入字符串:\n");
    for ( i = 0; i < NUM1; i++)
    {
        printf("s[%d]：",i); scanf("%s",s[i]);
        if((strcmp(s[i],"$$$$$"))==0)
       {
            break;
       }
    }
    printf("该字符串为：\n");
    put_strary(s,NUM1);
    return 0;
}