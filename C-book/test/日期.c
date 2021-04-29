/*
在世上已渡过几年几月几日，合计多少小时，多少分钟，多少秒？
余生还有几年几月几日，合计多少小时，多少分钟，多少秒？
*/
/*
本题思路不难想，关键在于获得当前系统时间并且恰当的使用<time.h>头文件。
但是一定要着重注意在VC6.0中代码的规范性和健壮性，所有的对变量的声明必须放在函数的开头。这也是本代码耗时一个星期的原因。记录此错误，望引以为鉴。
*/
#include<stdio.h>
#include<time.h>

int monthDay(int year,int month);
int isLeapYear(int year);
int Hour(int year,int month,int day);

int monthDay(int year,int month){  //判断某年某月的天数 
	int x=isLeapYear(year);
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
		case 2: break;
		default: printf("error!");break;  
	} 
	if(x==365&&month==2){
		return 28;
	}
	else if (x==366&&month==2)
	{
		return 29;
	} 
} 

int isLeapYear(int year){  //判断该年是平年还是闰年 
	if((year%4==0&&year%100!=0)||year%400==0){
		return 366;
	}else{
		return 365;
	}
}

int Hour(int year,int month,int day){   //计算某年某月某天到目前为止的天数
	int i;
	int sum_year_day=0;
	int sum_month_day=0;
	int sum_day=0;
	
	time_t t;
    struct tm * lt;
    time (&t);
    lt = localtime (&t);

	for ( i = year+1; i < lt->tm_year+1900; i++)  //计算年的天数
	{
		if (isLeapYear(i) == 366)
		{
			sum_year_day+=366;
		}else{
			sum_year_day+=365;
		}
	}

	for ( i = month+1; i <= 12; i++)   //计算今年的月的天数
	{			
		sum_month_day+=monthDay(year,i);
	}

	for ( i = 1; i < 1+lt->tm_mon; i++) //计算本月的天数

	{
		sum_month_day+=monthDay(lt->tm_year+1900,i);
	}
	
	sum_day=sum_month_day+sum_year_day+monthDay(year,month)-day+lt->tm_mday; //年某月某天到目前为止的总天数
	
	return sum_day*24;
} 

int main()
{
    int y,m,d;
	int MyYear,MyMonth,MyDay;
	int hour,minute,second;
	int MyLastYear,MyLastMonth,MyLastDay;
	int lasthour,lastminute,lastsecond;
	int i,sum_day=0;
	
	time_t t;
    struct tm *lt;
    time (&t);
    lt = localtime (&t);
	
	printf("请输入您的生日（格式为2000-1-1）："); 
	scanf("%d-%d-%d",&y,&m,&d);

    printf("当前时间为：%d/%d/%d %d:%d:%d\n",lt->tm_year+1900, 1+lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec);
	
	MyYear=lt->tm_year+1900-1-y;
	MyMonth=1+lt->tm_mon+(12-m);

	MyDay=lt->tm_mday+monthDay(y,m)-d;
	if (MyDay>1+lt->tm_mon) //计算一个月天数大于本月的最大天数时候的特殊情况
	{
		MyDay-=30;
		MyMonth++;
	}
	if (MyMonth>=12)  //计算总月份大于12时的特殊情况
	{
		MyMonth-=12;
		MyYear++;
	}
	

	printf("迄今为止，您在世上已度过了%d年%d月%d天\n",MyYear,MyMonth,MyDay);

	hour=Hour(y,m,d)+lt->tm_hour; //计算总共的小时数
	minute=hour*60+lt->tm_min;  //计算总共的分钟数
	second=minute*60+lt->tm_sec;  //计算总共的秒数
	printf("合计%d个小时，%d分钟，%d秒\n",hour,minute,second);  

	MyLastYear=86-MyYear-1;
	MyLastMonth=12-MyMonth-1;
	MyLastDay=monthDay(lt->tm_year+1900, 1+lt->tm_mon)-lt->tm_mday;

	printf("余生还有%d年%d月%d天\n",MyLastYear,MyLastMonth,MyLastDay);

	for ( i = 1; i <= 86; i++)
	{
		sum_day+=isLeapYear(y+1);
	}

	for ( i = m+1; i <= 12; i++)
	{			
		sum_day+=monthDay(y,i);
	}
	sum_day+=monthDay(y,m)-d-hour/24-1;  //如果86岁的12.31去世，则经历的总天数

	lasthour=sum_day*24+24-lt->tm_hour;
	lastminute=lasthour*60+60-lt->tm_min;
	lastsecond=lastminute*60+60-lt->tm_sec;
	printf("合计%d个小时，%d分钟，%d秒\n",lasthour,lastminute,lastsecond);
	return 0;
}
