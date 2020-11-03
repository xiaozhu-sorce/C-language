//给定n，求1～n这n个数中每任意两个不同的数的最大公约数的和.
int gcd(int a,int b){
    int r;
    r=a%b;
    while (r)
    {
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}
int main (){
    int n,i,j;
    int sum[100];
    int s=0;
    int k;
    scanf("%d",&n);
    for ( i = 1; i < n; i++)
    {
        
        for ( j = n; j >i ;j--)
        {
            k=gcd(i,j);
            s+=k;
        }
        
    }
    printf("%d",s);
    return 0;
}
