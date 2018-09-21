//输入n个数，n<=100，找到其中最小的数和最大的数
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a,m[n];
    
    for(a=0;a<n;a++)
    	scanf("%d",&m[a]); //！报错原因：忘记加上地址运算符"&"
    	
    int min=m[0];
    int max=m[0];
    for(a=1;a<n;a++)
    {
    	if(m[a]<min)
    		min=m[a];
    	if(m[a]>max)
    		max=m[a];
	}
	printf("%d %d",min,max);
    return 0;
}
