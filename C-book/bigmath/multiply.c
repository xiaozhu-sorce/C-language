//超长整数的乘法 
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 40

void beep();
void GetNumberStr(char s[]);
void MultiplyNumberStr (char a[],char b[],char c[]);
char MultiplyChar (char ch1,char ch2);
char LeftShift(char d[],int i);
void LeftTrim(char str[]);

int tag=0;

void main(){
    char a[N+1]={0},b[N+1]={0},c[2*N];

    printf("a=");
    while (strlen(a) == 0)
    {
        GetNumberStr(a);
    }
    printf("\nb=");
    while (strlen(b) == 0)
    {
        GetNumberStr(b);
    }

     MultiplyNumberStr(a,b,c);
     printf("\n a*b=%s \n",c);   
}
void GetNumberStr(char s[]){
    int i = 0;
    char ch; 
    while (1)
    {
        ch=getch();
        if (ch=='\r')
            break;
        
        if (ch=='\b')
        {
            if (i>0)
            {
                printf("%c %c",ch,ch);
                i--;
            }
            else{
                beep();
            }
            continue;
        }
        if (ch<'0'||ch>'9')
        {
            beep();
            continue;
        }
        if (i<N)
        {
            printf("%c",ch);
            s[i++]=ch;
        }
        else{
            beep();
        }
    }
    s[i]='\0'; 
}

void beep(){
    printf("\07");
}

void MultiplyNumberStr(char a[],char b[],char c[]){
    int i,j,k,m,n;
    memset(c,0,2*N);
    i=strlen(a)-1;
    j=strlen(b)-1;
    k=N;
    
    for(m=0; m< i+1; m++){
    	for(n=0; n< j+1; n++){
			c[m+n+1] += (a[m]-0x30)*(b[n]-0x30);
		}
	}

    for(m = i + j + 1; m > 0 ; --m) {
        if(c[m] > 9) {
            c[m - 1] += c[m] / 10;
            c[m] = c[m] % 10 + 0x30;
        }else{
			c[m] += 0x30;  
		} 
    }
    
    c[N+1] = '\0';
    LeftTrim(c);
}

void LeftTrim(char str[]){
    int i;
    for ( i = 0; str[i]==' '; i++)
    {

    }
    strcpy(str,str+1);
}