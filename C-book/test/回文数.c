#include<stdio.h>
#include<string.h>
void main(){
    printf("菩萨蛮`回文\n");
    printf("朝代：宋代|作者：张孝祥\n");
    int i;
    char a[100],b[100];
    for ( i = 0; i < 4; i++)
    {
        scanf("%s",a);
        int len = strlen(a);
        int j;
        for ( j = 0; j < len; j+=2)
        {
            b[j] = a[len - j- 2];
            b[j+1] = a[len-j-1];   
        }
        b[len]='\0';
        printf("%s\n",b);
    }
    
}