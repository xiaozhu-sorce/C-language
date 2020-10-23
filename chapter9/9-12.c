#include<stdio.h>
void rev_string(char s[][128],int n){
    int i,j ,x;
    for ( i = 0; i < n; i++)
    {
        while (s[i][j])
        {
            j++;x++;
        }
       
        for ( j = 0; j < x; j++)
        {
            putchar(s[i][x-1-j]);
        }
        
    }
    
}
int main (void){
    int n,i;
    char s[n][128];
    printf("字符串个数："); scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("s[%d]:",i); scanf("%s",s[i]);
    }
    rev_string(s,n);
    printf("该字符串颠倒后为:\n");
    for(i=0; i<n; i++)
    {
        printf("%s\n",s[i]);
    }
    printf("\n");
    return 0;
}