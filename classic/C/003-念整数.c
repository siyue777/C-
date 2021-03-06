/*题目内容：
你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
如输入1234，则输出：
yi er san si
注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：
fu er san si yi

输入格式:
一个整数，范围是[-100000,100000]。

输出格式：
表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。

输入样例：
-30

输出样例：
fu san ling

自己第一次通过测试的答案：*/

#include <stdio.h>

int main()

{
	int n;
	int a = 100000;
	int m;
	scanf("%d",&n);
	if(n==0){
		printf("ling");
	}
	else{
		if(n < 0){
		printf("fu ");
		n=0-n;
		}
	
		while(n/a ==0){
			a/=10;	
		}
		for(int m=n/a; a >=10;n=n-m*a,a/=10){
			m=n/a;
			switch(m){
				case 0:
					printf("ling ");
					break;		
				case 1:
					printf("yi ");
					break;
				case 2:
					printf("er ");
					break;
				case 3:
					printf("san ");
					break;
				case 4:
					printf("si ");
					break;
				case 5:
					printf("wu ");
					break;
				case 6:
					printf("liu ");
					break;
				case 7:
					printf("qi ");
				break;
				case 8:
					printf("ba ");
					break;
				case 9:
					printf("jiu ");
					break;
			}
		}
		switch(n){
			case 0:
				printf("ling");
				break;		
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
			
		}
	}	
	return 0;
}
/*感想：
调试多次才正确，缺点是判断次数过多，switch语句出现了两次太繁琐。
开头为了判断0的情况又多加了一条判断，下一步优化应该将switch语句合并为一次。
这是在没有学习数组的情况下只用循环判断语句做的结果。

以下为网上搜索出的答案：*/
#include <stdio.h>

int main(){
    int a, digit = 100000;
    scanf("%d", &a);

    if (a < 0) {
        printf("fu ");
        a = -a;
    }

    while (digit > 1)
    {
        if (a / digit != 0)
        {
            break;
        }
        digit /= 10;
    }

    for (; digit > 0; digit /= 10) {
        switch (a / digit)
        {
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
            case 0:
                printf("ling");
                break;
        }
        a -= (a / digit) * digit;
        if (digit != 1) {
            putchar(' ');
        }
    }
    return 0;
}
/*总结：
首先不用再额外判断整数为0的情况，其次将空格情况拆分开来，switch语句只用出现一次。
变量清晰，我自己的变量条件不直观，在改进变量条件的情况下花费时间过多。
对循环语句的条件格式还没有熟练掌握。*/

	
	
	
