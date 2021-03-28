#include<stdio.h>
float type(int a,char op1,int b,char op2,int c){
    double m,n;
    if (op1=='+')
    {
        if (op2=='*')
        {
            return a+(b*c);
        }
         else if (op2=='/')
        {
            return a+(b/c);
        }
        else if(op2=='%')
        {
            return a+(b%c);
        }
        else if (op2=='+')
        {
            return a+b+c;
        }
        else if(op2=='-')
        {
            return a+b-c;
        }  
    }
    else if (op1=='-')
    {
        if (op2=='*')
        {
            return a-b*c;
        }
         else if (op2=='/')
        {
            return a-b/c;
        }
        else if(op2=='%')
        {
            return a-b%c;
        }   
        else if (op2=='+')
        {
            return a-b+c;
        }
        else if(op2=='-')
        {
            return a-b-c;
        }  
    }
    else if(op1=='*')
    {
         if (op2=='*')
        {
            return a*b*c;
        }
         else if (op2=='/')
        {
            return a*b/c;
        }
        else if(op2=='%')
        {
            return a*b%c;
        }   
        else if (op2=='+')
        {
            return a*b+c;
        }
        else if(op2=='-')
        {
            return a*b-c;
        }  
    }
    else if(op1=='/')
    {
       if (op2=='*')
        {
            return a/b*c;
        }
         else if (op2=='/')
        {
            return a/b/c;
        }
        else if(op2=='%')
        {
            return a/b%c;
        }   
        else if (op2=='+')
        {
            return a/b+c;
        }
        else if(op2=='-')
        {
            return a/b-c;
        }  
    }
    else if(op1=='%')
    {
        if (op2=='*')
        {
            return a%b*c;
        }
         else if (op2=='/')
        {
            return a%b/c;
        }
        else if(op2=='%')
        {
            return a%b%c;
        }   
        else if (op2=='+')
        {
            return a%b+c;
        }
        else if(op2=='-')
        {
            return a%b-c;
        }  
    }
}
int main(){
    int a,b,c;
    char op1,op2;
    scanf("%d%c%d%c%d",&a,&op1,&b,&op2,&c);
    printf("%.1f", type(a,op1,b,op2,c));
    return 0;
}