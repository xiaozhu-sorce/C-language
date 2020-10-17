#include <stdio.h>
int main(void)
{	
    int no;	
    do {		
    printf("请输入一个正整数：");		
    scanf("%d", &no);		
    if (no <= 0)			
    puts("\a请不要输入非正整数。");	
    } while (no <= 0);
    printf("%d",no);
    int i=0;	
    while (no > 0) {						
        no /= 10;
        i++;						
        }	
        printf("的位数是%d",i);		
return 0;
}