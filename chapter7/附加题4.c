/*十进制转换为二进制*/
#include<stdio.h>
int main (void){
    char ch;
    int n;
    printf("n="); scanf("%d",&n);
    while (n!=0&&n!=1)
    {
        ch=n%2+ch;
        n=n/2;
    }
    printf("%s",ch);    
}