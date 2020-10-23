#include<stdio.h>
void put_stringn(const char s[],int n){
    int i;
    printf("\"");
    for ( i = 0; i <n; i++)
    {
        printf("%s",s);
    }
    printf("\"");
}
int main (void){
    char s[128];
    int n;
    printf("请输入字符串："); scanf("%s",s);
    printf("字符重复次数："); scanf("%d",&n);
    printf("显示字符串。");
    put_stringn(s,n);
    return 0;
}