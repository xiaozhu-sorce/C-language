#include<stdio.h>
#include<string.h>

#define N 20

void get(char *str,int start,int len);
void insert(char *str_s,char *str_d,int point);
void del(char *str,int start,int len);

//定义get（）进行取字符串操作。其中*str在本例中可理解为一个指向字符串首地址的指针。start和len分别为开始位置和长度
void get(char *str,int start,int len){
	int m;

	strcpy(str,str+start-1); //将字符串从第start位置开始到结束复制给str 

	for(m=0;m<len;m++){  //逐个输出所有的字符串
		str++;
	}
	*str = '\0';
	str -= len; //将str指针指向字符串的首地址
	printf("%s\n",str); 
}

//定义insert（）进行字符串插入操作。str_s为源字符串，str_d为目标字符串。
void insert(char *str_s,char *str_d,int point){
	int m;
	char p[N];

	strcpy(p,str_d+point); //将目标字符串的前start位复制给str

	for(m=0;m<point;m++){ //使str_d指针指向第start位
		str_d++;
	}

	*str_d = '\0';

	strcat(str_d,str_s); //将str_s拼接到str_d后面
	strcat(str_d,p); //将p拼接到str_d后面
	
	str_d -= point; //将str_d指针指到字符串的首地址
	printf("%s\n",str_d);
}

//定义del（）进行字符串的删除操作。
void del(char *str,int start,int len){
	int m;
	char p[N];

	strcpy(p,str+start+len-1); //将字符串删除的最后一位后面的所有字符串保存到p

	for(m=0;m<start-1;m++){ //将str指针指向需要删除的第一位
		str++;
	}

	*str = '\0';

	strcat(str,p); //将p拼接到str后面

	str -= (start-1); //将str指针指向字符串的首地址
 	printf("%s\n",str);
}

void main(){
	int flag;
	char str1[N],str2[N];
	int i,len;

	while(1){
		printf("请输入一个数字以表示您要执行的操作：（0：取子串   1：插入子串  2：删除子串  3：结束）");
		scanf("%d",&flag);

		if(flag == 0){
			printf("请输入字符串：");
			scanf("%s",&str1);
			printf("请输入取出子串的起始位置:");
			scanf("%d",&i);
			printf("请输入所需子串的长度:");
			scanf("%d",&len);
			get(str1,i,len);
		}else if(flag == 1){
			printf("请输入源字符串：");
			scanf("%s",&str1);
			printf("请输入目标字符串：");
			scanf("%s",&str2);
			printf("请输入插入位置:");
			scanf("%d",&i);
			insert(str1,str2,i);
		}else if(flag == 2){
			printf("请输入字符串：");
			scanf("%s",&str1);
			printf("请输入删除的起始位置:");
			scanf("%d",&i);
			printf("请输入删除的长度:");
			scanf("%d",&len);
			del(str1,i,len);
		}else if(flag == 3){
			break;
		}
	}
}
