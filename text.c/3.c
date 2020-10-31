//如下创建只含有一个return表达式的函数，在这个函数中只使用条件运算符，找出三个数中的最小的数。
int function(int a, int b, int c) {
   	return ((a<b?a:b)<c)?(a<b?a:b):c;
}
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("三个数中的最小数为%d",function(a,b,c));
    return 0;
}