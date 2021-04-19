//超长整数的除法 
#include<stdio.h>
#include<stdlib.h> 
#include<conio.h>
#include<string.h>
#define N 20

void beep();
void GetNumberStr(char s[]);
void DivideNumberStr(char a[],char b[],int c[]);
void DeleteNumber(int m);
void LeftTrim(char str[]);
 
char a[N],b[N];
int c[N];
 
void main(){

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

    DivideNumberStr(a,b,c);

}

void GetNumberStr(char s[]){
    int i = 0;
    char ch; 
    while (1)
    {
        ch=getch();
        if (ch == '\r')
            break;
        
        if (ch == '\b')
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

void DivideNumberStr(char a[],char b[],int c[]){
    int i,j,k,m,n;
	memset(c,'0',N);
    n=strlen(a);
    m=strlen(b);
    
    k=0;
    while(1)
	    {
            c[k]=0;
            while(strcmp(a,b)>=0)
            {
                DeleteNumber(m);
                c[k]++;
            }
            k++;
            if(n==m)   break;
            for(i=m-1; i>=0; i--)
                b[i+1]=b[i];
            b[0]='0';
            m++;
            b[m]='\0';
        }
    printf("\n a/b=");
    i=0;
    while(c[i]==0) i++;
        for(; i<k; i++)
            printf("%d",c[i]);
    
    c[N+1] = '\0';
}

void DeleteNumber(int m){
    int i=0,j;
    while(1)
    {
        if(a[i]=='0') i++;
        else
        {
            j=i;
            break;
        }
    }
    for(; i<m; i++)
        a[i]=a[i]-b[i]+'0';
    for(i=m-1; i>j; i--)
        if(a[i]<'0')
        {
            a[i]+=10;
            a[i-1]--;
        }
}