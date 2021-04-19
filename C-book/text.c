#include<stdio.h>
void main(){
    int i;
    int s=1;
    for ( i = 2; i <= 32; i+=2)
    {
        s*=i;
    }
    printf("%d",s);
    
}