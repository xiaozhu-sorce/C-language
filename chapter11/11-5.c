#include<stdio.h>
int str_chnum(const char*s,int c){
    int n=0;
    while (*s)
    {
        if (*s=='c')
        {
            n++;
        }
        s++;
    }
    
    return n;
}
int main (void){
    int c;
    char *s="hello ccc world";
    printf("字符串中字符c的个数%d",str_chnum(s,c));
    return 0;
}