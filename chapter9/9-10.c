#include<stdio.h>
#define NUMBER 80
void del_digit(char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        
        {if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            putchar(s[i]);
        }
        i++;
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