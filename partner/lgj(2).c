#include <stdio.h>

int main ()
{
    int number1,number2;
    char mark;
    scanf("%d%c%d",&number1,&mark,&number2);
    if(mark=='/')
    {
        if (number2==0)
            printf("The divsior is 0");
        else
            printf("%f",(float)number1/(float)number2);
    }
    else if(mark=='*')
        printf("%d",number1*number2);
    else if(mark=='-')
        printf("%d",number1-number2);
    else if(mark=='+')
        printf("%d",number1+number2);
    return 0;
}