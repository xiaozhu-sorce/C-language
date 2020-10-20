#include<stdio.h>
int main (void){
    int n;
    printf("1的长度：%u",sizeof 1); putchar('\n');
    printf("+1的长度：%u\n",sizeof +1);
    printf("-1的长度：%u\n",sizeof -1);
    printf("%u\n",sizeof(unsigned)-1);
    printf("%u\n",sizeof(double)-1);
    printf("%u\n",sizeof((double)-1));
    printf("%u\n",sizeof n+2);
    printf("%u\n",sizeof (n+2));
    printf("%u\n",sizeof (n+2.0));
    return 0;

}