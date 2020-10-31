# include<stdio.h>
int cube(int x){
    return x*x*x;
}
int manin(){
    int n;
    scanf("%d",&n);
    printf("%d",cube(n));
    return 0;
}