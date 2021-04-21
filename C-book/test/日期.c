/*
计算迄今为止，你度过的时间 
*/
#include<stdio.h>
#include<time.h>
int isLeapYear(int year);
int monthDay(int year,int month);
int main()
{
    int y,m,d;
    
    printf("请问您生日的年份是："); scanf("%d",&y);
    printf("月份是："); scanf("%d",&m);
	printf("日："); scanf("%d",&d);
	
	time_t t;
    struct tm * lt;
    time (&t);
    lt = localtime (&t);
    printf("当前时间为：%d/%d/%d %d:%d:%d\n",lt->tm_year+1900, 1+lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec);
	
	int MyYear=lt->tm_year+1900-1-y;
	int MyMonth=1+lt->tm_mon-1+(12-m);
	int MyDay=lt->tm_mday-1+monthDay(y,m)-d;
	
	printf("迄今为止，您已经度过了%d年%d月%d天%d时%d分%d秒",MyYear,MyMonth,MyDay,lt->tm_hour, lt->tm_min, lt->tm_sec);  
	return 0;
}

int monthDay(int year,int month){  //判断某年某月的天数 
	int x=isLeapYear(year);
	if(x==365){
		switch(month) {
			case 1: 
			case 3: 
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: return 31; break;
			case 4:
			case 6:
			case 9:
			case 11: return 30; break;
			case 2: return 28; break;
			default: printf("error!");break;  
		}
	}else{
		switch(month) {
			case 1: 
			case 3: 
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: return 31; break;
			case 4:
			case 6:
			case 9:
			case 11: return 30; break;
			case 2: return 29; break;
			default: printf("error!");break;  
		}
	}
} 

int isLeapYear(int year){  //判断该年是平年还是闰年 
	if((year%4==0&&year%100!=0)||year%400==0){
		return 366;
	}else{
		return 365;
	}
}
