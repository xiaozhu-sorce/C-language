#include<stdio.h>
void main(){
    char ch;
    while (1)
    {
        ch=getchar();
        if (ch=='\r')
        {
            printf("\r");
            break;
        }else if (ch=='\n')
        {
            printf("\n");
            break;
        }
    }
    
}