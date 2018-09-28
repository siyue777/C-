/* 给出字符串a和字符串b，保证b是a的一个子串，输出b在a中第一次出现的位置
如输入abcd bc
输出 2
字符串长度不超过100
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[100];
    char ch2[100];
    int a=0;          //主串下标 
    int b=0;          //子串下标 
    scanf("%s %s",ch1,ch2);
    
    while(a<strlen(ch1)&&b<strlen(ch2))
    {
    	if(ch1[a]==ch2[b]) //如果相等，匹配下一个字符 
    	{
    		a++;
    		b++;
		  }
    	else              //如果不相等，子串下标清空，主串下标回退到匹配前的下一个字符 
    	{
    		a=a-b+1;
    		b=0;
		  }
  	}
	printf("%d",a-strlen(ch2)+1);  //循环结束后获取第一次出现下标 
    return 0;    	
}
/* 不少的题解使用了strstr函数
这个答案就是实现strstr函数作用比较简洁的过程
*/
