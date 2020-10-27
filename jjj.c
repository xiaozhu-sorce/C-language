#include<stdio.h>
int main(void){
    int i,m=0,j=0;
    int ch;   
for ( i = 0; i < 5; i++)
{
    ch=getchar();
  if (ch=='$')
  {  
      j++;
  }
 else
  {    
      m++; 
  }
}
printf("$的个数%d,%d",j,m);
}