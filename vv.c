#include<stdio.h>
#include<string.h>
void put_strary(char s[][128],int n)
{
    int i=0;
    for ( i = 0; i < n; i++)
    {
        if((strcmp(s[i],"$$$$$"))==0)
        {
            break;
        }
        else
        {
            printf("%s",s[i]);
        }
        printf("\n");
    }
}
int main (void)
{
    int i;
    char*s[4][128];
    char*p="$$$$$";
    printf("请输入字符串:\n");
    for ( i = 0; i < 4; i++)
    {
        printf("s[%d]:",i); scanf("%s",s[i]);
        while ((*s==*p)&&(*s!='\0'))
        {
            s++;
            p++;
        }
        
        if ((*s[i]-*p)==0)
        {
            break;
        }
        
    }
    
    printf("该字符串为：\n");
    put_strary(s,4);
    return 0;
}