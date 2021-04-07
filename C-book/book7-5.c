/**
 * 输入5×5的矩阵，求两条对角线上的各元素之和
 * 求两条对角线上行，列下标均为偶数的元素之和
 */
#include<stdio.h>
void main (){
    int dia[5][5];
    int a1=0,a2=0,b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",dia[i][j]);
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++){
            if (i==j)
            {
                a1+=dia[i][j];
            }else if (i+j==4)
            {
                a2+=dia[i][j];
            }

        }
    }
    for (int i = 0; i < 5; i+=2)
    {
        for (int j = 0; j < 5; j+=2)
        {
            if(i==j||i+j==4)
            b*=dia[i][j];
        }
        
    }
    
    printf("主对角线的元素之和为%d",a1);
    printf("副对角线上的元素之和%d",a2);
    printf("两对角线上的元素下标均为偶数的个元素之积",b-dia[2][2]);
}