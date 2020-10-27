#include<stdio.h>
#include<ctype.h>
void str_toupper(char*p){
    while (*p)
    {
        *p=toupper(*p);
        p++;
    }
    
}
void str_tolowre(char*p){
    while (*p)
    {
        *p=tolower(*p);
        p++;
    }
    
}
int main(void){
    char str[128];
    printf("请输入字符串："); scanf("%s",str);

    str_toupper(str);
    printf("大写字母：%s\n",str);

    str_tolowre(str);
    printf("小写字母：%s\n",str);
    return 0;
}