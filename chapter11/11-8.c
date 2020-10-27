
#include<stdio.h>
#define NUMBER 80
void del_digit(char *s)
{
    while(*s)
    {
        
        {if((*s>='a'&&*s<='z')||(*s>='A'&&*s<='Z'))
            putchar(*s);
        }
        s++;
    }
 
}
 
int main(void)
{
    char str[NUMBER];
    printf("请输入字符串:");
    scanf("%s",str);
    printf("该字符串去掉数字为:");
    del_digit(str);
return 0;
}