#include<stdio.h>
void rev_string(char s[][128],int n){
    int i,j=0,x;
    for ( i = 0; i < n; i++)
    {
        while (s[i][j])
        {
            j++;x++;
        }
        printf("\"");
        for ( j = 0; j < x; j++)
        {
            putchar(s[i][x-1-j]);
        }
        printf("\"");
    }
    
}
int main (void){
    int i,n;
    char s[n][128];
    printf("字符串个数："); scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("s[%d]:",i); scanf("%s",s[i]);
    }
    printf("该字符串颠倒后为:\n");
    rev_string(s,n);  /*将每一个字符串各自颠倒*/
    printf("\n");
    return 0;
}