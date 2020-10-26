#include <stdio.h>

int main(void)
{
	int  s = 0;
	int  a,b;
	int  c = 0;
	int  d = 0;
	int i;
	int  t;
	
	a = 1;
	s = s | a;
	
	b = 1 << 5;
	s = s | b;
	
	for(i = 9 ; i < 15 ; i++)
	{
		t = 1 << i;
		c = c | t;
	}
	s = s | c;
	for(i = 25 ; i < 32 ; i++)
	{
		t = 1 << i;
		d = d | t;
	}
	s = s | d;
	printf("%u",s);
	return 0;
	
}