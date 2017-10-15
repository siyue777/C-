#include <stdio.h>

int main()
{
	int a =0;
	int b= 0;
	int c= 0;
	int d= 0;
	
	scanf("%d", &a);
	b =(a/100);
	c =(a%100/10);
	d =(a%10);
	a =d*100+c*10+b;
	printf("%d", a);
	

}
