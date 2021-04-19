//超长整数的加法
#include<stdio.h>
#include<string.h>
#include <termios.h>
#define N 20

void beep();
void GetNumberStr(char s[]);
void AddNumberStr (char a[],char b[],char c[]);
char AddChar (char ch1,char ch2);
void LeftTrim(char str[]);

int tag=0;

void main(){
    char a[N+1]={0},b[N+1]={0},c[N+2];

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
    
    AddNumberStr(a,b,c);
    printf("\n a+b=%s \n",c);
}
void GetNumberStr(char s[]){
    int i = 0;
    char ch;
    while (1)
    {
        ch = getch();
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

void AddNumberStr(char a[],char b[], char c[]){
    int i,j,k;
    memset(c,' ',N+2);
    i=strlen(a)-1;
    j=strlen(b)-1;
    k=N;
    while (i>=0&&j>=0)
    {
        c[k--]=AddChar(a[i--],b[j--]);
    }
    while (i>=0)
    {
        c[k--]=AddChar(a[i--],'0');
    }
    while (j>=0)
    {
        c[k--]=AddChar(b[j--],'0');
    }
    if (tag==1)
    {
        c[k]='1';
    }
    c[N+1]='\0';
    LeftTrim(c);
}

char AddChar (char ch1,char ch2){
    char ch;
    ch = (ch1-0x30+ch2-0x30)+tag;
    if (ch>=10)
    {
        tag=1;
        return (ch-10+0x30);
    }
    else{
        tag=0;
        return (ch+0x30);
    }
    
}

void LeftTrim(char str[]){
    int i;
    for ( i = 0; str[i]==' '; i++)
    {

    }
    strcpy(str,str+1);
}
char getch(void)
{
    char buf = 0;
    struct termios old = {0};
    fflush(stdout);
    if(tcgetattr(0, &old) < 0)
        perror("tcsetattr()");
    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;
    old.c_cc[VMIN] = 1;
    old.c_cc[VTIME] = 0;
    if(tcsetattr(0, TCSANOW, &old) < 0)
        perror("tcsetattr ICANON");
    if(read(0, &buf, 1) < 0)
        perror("read()");
    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;
    if(tcsetattr(0, TCSADRAIN, &old) < 0)
        perror("tcsetattr ~ICANON");
    printf("%c\n", buf);
    return buf;
 }