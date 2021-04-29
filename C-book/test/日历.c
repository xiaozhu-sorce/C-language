#include<stdio.h>
#include<time.h>
#include<malloc.h>

int monthDay(int year,int month);
int isLeapYear(int year);
int weekDay(int year,int month);

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

int weekDay(int year,int month){  //判断某年某月的第一天是星期几
	int iWeekDay = -1; 
    if (month == 1 || month == 2) 
    {   
        month += 12; 
        year--;
    }   
    iWeekDay = (1 + 1 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;  //基姆拉尔森计算日期公式：w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)
    switch(iWeekDay)
    {   
        case 0 : return 0; break;
        case 1 : return 1; break;
        case 2 : return 2; break;
        case 3 : return 3; break;
        case 4 : return 4; break;
        case 5 : return 5; break;                                                             
        case 6 : return 6; break;
        default : return NULL; break;
    }   
}

void main(){
	int year,month;
	int *pmonth1,*pmonth2,*pmonth3;
	int m1,m2,m3;
	int i,j,k,n,q,time;
	
	printf("请输入年份：");
	scanf("%d",&year);
	
	for(time=1;time<12;time+=3){  //每次输出三个月，循环三次
		printf("       %d月                      %d月                     %d月\n",time,time+1,time+2);
		printf(" 日 一 二 三 四 五 六    日 一 二 三 四 五 六    日 一 二 三 四 五 六\n");
		
		m1=monthDay(year,time); pmonth1 = (int *)malloc(m1*sizeof(int));
		m2=monthDay(year,time+1); pmonth2 = (int *)malloc(m2*sizeof(int));
		m3=monthDay(year,time+2); pmonth3 = (int *)malloc(m3*sizeof(int));  //m123存储相应的每个月的天数，并且同时使用动态存储，避免使用指针造成内存浪费

		if(pmonth1==NULL || pmonth2==NULL || pmonth3==NULL){
			printf("Insufficient memory available!");
			exit(0);
		}

		for(i=0 ; i< m1 ; i++)
			pmonth1[i]=i+1;
		for(i=0 ; i< m2 ; i++)
			pmonth2[i]=i+1;
		for(i=0 ; i< m3 ; i++) //存储进数组
			pmonth3[i]=i+1;

		
		for(i=0;i<weekDay(year,time);i++)  //根据本月第一天是星期几来输出相应的偏移量（空格）
			printf("   ");
		j=0;
		for(i=weekDay(year,time); i< 7 ; i++){ //输出本月的第一个星期
			printf("%3d",pmonth1[j++]);
		}

		printf("   ");  //相邻两个月之间的空格数

		for(i=0;i<weekDay(year,time+1);i++)
				printf("   ");
		k=0;
		for(i=weekDay(year,time+1) ; i< 7 ; i++){
			printf("%3d",pmonth2[k++]);
		}

		printf("   ");

		for(i=0;i<weekDay(year,time+2);i++)
				printf("   ");
		n=0;
		for(i=weekDay(year,time+2) ; i< 7 ; i++){
			printf("%3d",pmonth3[n++]);
		}

		while(j<m1 || k<m2 || n<m3){  //输出本月剩余的天数
			printf("\n");
			for(i=0 ; i<7 ; i++){
				if(j==m1){   //当本月最后一行输出完成以后，计算后续空格数
					while(7-i>0){
						i++;
						printf("   ");
					}
					break;
				}
				printf("%3d",pmonth1[j++]);
			}
			printf("   ");
			for(i=0 ; i<7 ; i++){
				if(k==m2){
					while(7-i>0){
						i++;
						printf("   ");
					}
					break;
				}
				printf("%3d",pmonth2[k++]);
			}
			printf("   ");
			for(i=0 ; i<7 ; i++){
				if(n==m3){
					while(7-i>0 ){
						i++;
						printf("   ");
						}
					break;
				}
				printf("%3d",pmonth3[n++]);
			}
		}
		printf("\n");
	}

	free(pmonth1); free(pmonth2); free(pmonth3);

}