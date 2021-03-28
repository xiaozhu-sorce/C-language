//求n个自然数的立方和
#include <stdio.h>

int sum_of_series (int number)
{
    if(!number) 
        return 0;
    
    return number*number*number+sum_of_series(number-1);

}

int main () {
    int sum, number = 5;
    sum = sum_of_series(number);
    printf("%d", sum);
    return 0;
}
