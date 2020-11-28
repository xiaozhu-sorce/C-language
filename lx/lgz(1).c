#include<stdio.h>
int main(){
    char str[10][30];
    int i=0;
    char s1=" ";
    while (i<5)
    {
        scanf("%s",str[i]);
        i++;
    }
    i=0;
    while (i<5)
    {
        strcat(str[0],str[i+1]);
        i++;
    }
    printf("%s",str[0]);
    return 0;
}