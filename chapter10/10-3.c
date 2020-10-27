#include<stdio.h>
void sort3(int *n1,int *n2,int *n3){
    int temp;
    if (*n1>*n2)
    {
        temp=*n1;
        *n1=*n2;
        *n2=temp;
    }
    if (*n2>*n3)
    {
        temp=*n2;
        *n2=*n3;
        *n3=temp;
    }
    if (*n1>*n2)
    {
        temp=*n1;
        *n1=*n2;
        *n2=temp;
    }
}
int main (void){
    int a,b,c;
    printf("输入整数A："); scanf("%d",&a);
    printf("输入整数B："); scanf("%d",&b);
    printf("输入整数C："); scanf("%d",&c);
    sort3(&a,&b,&c);
    printf("升序排列 ：\n%d,%d,%d",a,b,c);
    return 0;
}