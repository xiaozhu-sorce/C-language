#include<stdio.h>
int main()
{
     int month;
     printf("请输入月份:"); scanf("%d",&month);
     switch (month)
     {
     case 3||4||5: printf("%d月是春季。\n",month); break;
     default:printf("%d月不存在。\n",month); break;
     }
return 0;
}