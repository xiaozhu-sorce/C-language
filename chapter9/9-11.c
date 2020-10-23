#include<stdio.h>
#define NUM1 10
#define NUM2 128
void put_strary(const char s[][NUM2],int n){
    int i;
    do
    {
        for ( i = 0; i < n; i++)
        {
            printf("s[%d]=\"%s\"\n",i,s[i]);
        }
        
    } while (s[i]==$$$$$);
    
}
int main (void){
    char cs[5][NUM2];
    int j;
    for ( j = 0; j < NUM1; j++)
    {
        printf("输入字符："); scanf("%s",cs);
        j++;
    
    }
    put_strary(cs,NUM1);
    return 0;
}