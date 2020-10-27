#include<stdio.h>
char *str_char(const char*s,int c){
    int i=0;
    while (*s)
    {
        i++;
        if (*s=='c')
        {
           return i; break;
        }
        s++;
    }
    
}
int main (void){
    int c;
    char *p="hellow ccc world";
    printf("%d",str_char(p,c));
    return 0;
}