#include<stdio.h>

void main()
{
    short int a,b,c,d;
    unsigned int max,min,del;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    a=(unsigned int)a;
    b=(unsigned int)b;
    c=(unsigned int)c;
	d=(unsigned int)d;

	max = (a>b ? a : b) > (c>d ? c : d) ? (a>b ? a : b) : (c>d ? c : d);
	min = (a<b ? a : b) > (c<d ? c : d) ? (a<b ? a : b) : (c<d ? c : d);
	del = max -min;

    printf("%u unsigned max:%u   unsigned min: %u\n",a,max,min);
    printf("max(input):%d     min(input):%d\n",max,min);
	printf("unsigned max - unsigned min = %u\n",del);
}
