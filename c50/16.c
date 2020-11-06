//统计元音
#include<stdio.h>
#include<string.h>
int main()
{ 
char s1[100]; 
int m; 
int number1,number2,number3,number4,number5;
scanf("%d",&m);
while(scanf("%d",&m)!=EOF){ 
    for(int j=1;j<=m;j++) 
    { 
        gets(s1); //get函数的作用与scanf相同，并且代码更为简洁，除此之外，gets函数还可以输入空格！！
        int len=strlen(s1);
        number1=0;number2=0;number3=0;number4=0;number5=0; 
        for(int i=0;i<len;i++) 
        { 
            if(s1[i]=='a') number1++; 
            else if(s1[i]=='e') number2++; 
            else if(s1[i]=='i') number3++; 
            else if(s1[i]=='o') number4++; 
            else if(s1[i]=='u') number5++; 
        } 
        printf("a:%d\n",number1); 
        printf("e:%d\n",number2); 
        printf("i:%d\n",number3); 
        printf("o:%d\n",number4); 
        printf("u:%d\n",number5); 
        if(j!=m)
            printf("\n"); 
        } 
    } 

}