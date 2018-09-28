/*
C primer plus第六章循环习题第五题：
提示用户输入大写字母使用循环嵌套按金字塔格式打印字母
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
根据用户输入的字母决定，上图为输入字母E的结果。
*/
#include<stdio.h> //第一次写的代码
int main(void)
{	
    const cn='A';
    char ch,start;
    printf("请输入大写字母:\n");       // 根据用户输入的大写字母打印结果
    scanf("%c",&ch);
    int i,n,a,b,j;                   // 内层不用每组循环使用不同变量
    n=ch-cn;
    for(i=0;i<=n;i++)
    {	
        for(a=i;a<n;a++)
	printf(" ");
	for(start=cn,b=0;b<=i;b++)    // 循环变量混乱重复
	printf("%c",start++);	
	for(start-=2,j=0;j<i;j++)
	printf("%c",start--);
	printf("\n");
    }
    return 0;	
}

第二次修改后：
#include<stdio.h> 
int main(void)
{	
    char ch;
    char cn='A';
    printf("请输入大写字母:\n");       // 根据用户输入的大写字母打印结果
    scanf("%c",&ch);
    int a,b,n;			    //n为输入字母和A的差值，a为外层循环变量，b为内层循环变量
    n=ch-cn;
    
    for(a=0;a<=n;a++)               //外层循环，循环打印多少行数 
    {
        for(b=0;b<n-a;b++)          //内层循环1，打印空格 
            printf(" "); 
	    
	for(b=0,cn='A';b<=a;b++)    //内层循环2，升序打印字母 
            printf("%c",cn++);	
	    
	for(b=0,cn-=2;b<a;b++)      //内层循环3，降序打印字母 
	    printf("%c",cn--);
	    
	printf("\n"); 
    }
    return 0;	
}
