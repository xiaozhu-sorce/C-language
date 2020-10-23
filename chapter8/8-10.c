#include<stdio.h>
int main (void){
    int i,j,ch,cnt[10]={0};
    while ((ch=getchar())!=EOF){
        if (ch>='0'&&ch<='9')
        {
            cnt[ch-'0']++;
        }
    
    }
    puts("数字字符出现的次数：");
    for ( i = 0; i < 10; i++)
    {
      
        for ( j = 0; j < cnt[i]; j++)
        {
             printf("'%d':",i);  putchar('*');
        }
        putchar('\n');
    }
    return 0;
}