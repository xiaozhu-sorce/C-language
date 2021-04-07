#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{  int len,i;
    char a[100];
    gets(a);
    len=strlen(a);
    for(i=len-1;i>=0;i--)
        printf("%c",a[i]);
    
}