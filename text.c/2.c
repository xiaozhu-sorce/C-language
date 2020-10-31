//输入两个浮点数a和b，输出a除以b的小数结果，并以"%m.nf"的形式格式化输出（m与n的值是自己设定的任意正整数），**在代码中用注释解释此格式中m和n的意义**。
#include<stdio.h>
int main(void){
double a,b,t;
scanf("%lf %lf",&a,&b);
t=a/b;
printf("%06.2f",t);//m：表示包含.在内共有6位。n表示小数点后有两位
return 0;
}
