#include<stdio.h>
#include<string.h>
void put_string (const char*s){
    while (*s)
    {
        printf("%c",*s);
        s++;
    }
    
} 
int main (void)
{
	char *s = "HELLOworld";
	
	put_string(s);
	
	return 0;
}