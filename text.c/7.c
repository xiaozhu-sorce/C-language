// 编写inverse_n函数，返回将无符号整数1x的第pos位开始的n位取反后的值。
unsigned inverse_n (unsigned  x,int pos,int n){
      return x ^= 1U << (pos + n - 1);       
}
int main (void){
    unsigned x;
    int pos;
    int n,m;
    scanf("%d %d %d",&x,&pos,&n);
    m=inverse_n (x,pos,n);
    printf("%u",m);
    return 0;
}