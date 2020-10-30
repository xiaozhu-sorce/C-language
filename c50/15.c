//输入数据并输出相应的消息，第一行包含一个整数T（1 <= T <= 1000）。输入将包含由空白（空格，换行符，TAB）分隔的T个正整数。整数将不少于32。
 
#include<stdio.h>
int main (void){
    int i;
    while ((scanf("%d",&i))!=EOF)
    {  
        printf("%c",i);
    }
    return 0;
}