#include<stdio.h>
int main()
{
	char str[100];
	char ch;
	int i, num=0, word=0;
    while (gets(str))
    {
        for (i = 0; i<100; i++)
	    {
		    if (str[i] == ' ')
			    word = 0;
		    else if (word == 0)
		    {
			    word = 1;
			    num++;
		    }
	    }
	printf("%d",num);
	return 0;
    }
}
