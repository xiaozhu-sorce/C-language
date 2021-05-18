#include <stdio.h>
#include<string.h>
#define N 100

void getWord(char a[] , char b[]);
void sort(char word[N][10] , int sum[],int k);

int j=0; //定义j为全局变量

//数组a是不断被分割的英文句子，数组b是用来存储句子中的第一个单词
void getWord(char a[N],char b[N]){
	int i=0;
	while(a[i]!=' ' && a[i]!=',' && a[i]!='.'){  //一位一位的赋值给数组b
		b[i] = a[i];
		i++;
		j++;
	}

	b[i] = '\0';

	while (1){ //用j存储目前分离到句子的第几位，该循环是为了保证指向的第一位是字母。
		if(a[i]!=' ' && a[i]!=',' &&a[i]!='.')
			break;
		j++;
		i++;
	}
}

//word存储的第一维数的单词和sum数组一一对应，k为单词的个数
void sort(char word[N][10] , int sum[],int k){
	int m,n,temp;
	int flag=0;
	char str[N];
	for (m = 0;m < k-1; m++){ //优化的冒泡排序
		for (n = 0;n < k-1-m;n++){
			if( sum[n] < sum [n+1]){
				temp = sum[n];
      			sum[n] = sum[n+1];
                sum[n+1] = temp;
      			flag = 1;
				strcpy(str,word[n]);
               	strcpy(word[n],word[n+1]);
      			strcpy(word[n+1],str);
			}
		}
		if(flag == 0) break;
	}
	for (m=0;m<k;m++){
		printf("%s",word[m]);
		printf(" %d \n",sum[m] + 1);
	}
}

void main(){
	char para[N],par[N];
	char str[N],Word[N][10];
	int i=0,m,flag=0,len;
	int num[N] = {0};

	gets(para);
	len = strlen(para);
	strcpy(par,para); //将para复制到par
	while(1){
		getWord(par,str); //每次循环都分离出来一个单词
		strcpy(Word[i],str); //将存储到的单词赋值给Word的一个维数
		strcpy(par,para+j); //将第j位以后的句子复制给par
		
		for (m=0;m<i;m++){ //判断是否有和之前已经存储的单词相同的
			flag = 0;
			if (strcmp(Word[i],Word[m]) == 0 ){
				num[m] += 1; //给相应的num数组值加一
				flag = 1;
				break;
			}
		}

		if(flag == 0){ //根据flag判断是否有相同的单词
			i++;
		}
		
		if(j >= len){ //循环结束的标志。j大于英文句子的长度
			break; 
		}
	}

	sort(Word,num,i); //根据num数组对字符串数组进行排序
}
