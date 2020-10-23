#include<stdio.h>
#define NUMBER 128
void put_stringr(const char s[])
{
    int i=0;
    int j=0;
    while(s[i]!='\0')
    {
        j++;
        i++;
    }
    for(i=0; i<j; i++)
    {
        putchar(s[j-1-i]);
    }
 
}
 
int main(void)
{
    char str[NUMBER];
    printf("请输入字符串:");
    scanf("%s",str);
    printf("该字符串逆向输出为:");
    put_stringr(str);
}