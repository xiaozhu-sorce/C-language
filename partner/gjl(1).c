#include<stdio.h>
int main (){
    int t[100000];
    int n,a,b,i,j;
    while(scanf("%d",&n)!=EOF&&n!=0){
       for (i = 0; i < n; i++)
        {
            scanf("%d%d",&a,&b);
            for ( j =a-1 ; j <= b-1; j++)
            {
                t[j]=t[j]+1;
            }
        }
         for ( i = 0; i < n; i++)
        {
          printf("%2d",t[i]);
        }
        putchar('\n');
    }
    return 0;
}