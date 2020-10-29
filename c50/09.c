/*给定一个日期，输出这个日期是该年的第几天。*/
#include<stdio.h>
int main(void){
    int a,b,c;
    int i=0;
    while (scanf("%d %d %d",&a,&b,&c))
    {
        if (a%4)/*平年2月28*/
        {
            switch (b)
            {
            case 1 :  break;
            case 2 : i=31;break;
            case 3 : i=59;break;
            case 4 : i=90;break;
            case 5 : i=120;break;
            case 6 : i=151;break;
            case 7 : i=181;break;
            case 8 : i=212;break;
            case 9 : i=243;break;
            case 10: i=273;break;
            case 11: i=304;break;
            case 12: i=334;break;
            default: printf("error.");break;
            }
        }
        else/*闰年2月29*/
        {
            switch (b)
            {
            case 1 :  break;
            case 2 : i=31;break;
            case 3 : i=60;break;
            case 4 : i=91;break;
            case 5 : i=121;break;
            case 6 : i=152;break;
            case 7 : i=182;break;
            case 8 : i=213;break;
            case 9 : i=244;break;
            case 10: i=274;break;
            case 11: i=305;break;
            case 12: i=335;break;
            default: printf("error.");break;
            }
        }
        i=i+c;
    printf("第%d天\n",i);
    }

    return 0;
}