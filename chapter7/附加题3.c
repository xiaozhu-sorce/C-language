/*二进制转换十进制*/
#include<stdio.h>
int main (void){
    char  ch;
    int a=0;
    while ((ch=getchar())!=EOF)
    {
    a=a*2+(ch-'0');
    }
    printf("\n%d",a);
    return 0;
    
}