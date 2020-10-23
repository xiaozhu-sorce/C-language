#include<stdio.h>
int str_char(const char s[],int c){
    int i=0;

    while(1)
    {
        if(s[i]=='\0')
        {
            return -1;
        }
        if(s[i]=='c')
        {
            return i;
        }
        i++;
    }

}

int main (void){
    char c;
    char ch[128];
    printf("请输入字符串："); scanf("%s",ch);
    printf("请输入一个字符:"); scanf("%s",c);
    printf("字符串s中含有字符%c的下标值为%d",c,str_char(ch,c));

    return 0;
}    
