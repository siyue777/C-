/*随机一列书本序列为自然数，将乱序的书按1,2,3,4……排序
求最小交换次数
如：5 4 3 2 1
第一次交换5和1:1 4 3 2 5
第二次交换4和2:1 2 3 4 5已经完成排序，则最小交换次数为2.
输入数据：书本的数量和书本的序列
5
5 4 3 2 1
输出2
思路：这种排序是把第一位数字调至它自然序列中对应的位置（数组数标-1的位置）
直到第一个数字为1，开始排序第二个数字 */

#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int num[n];
    int a, i, j;
    for (a = 0; a < n; a++){
        scanf("%d", &num[a]);  //读取书本序列
    }
    int flag = 0;
    for (a = 0; a < n;){
        if(num[a] != a + 1){   //调换序列
    	    int  p = num[a];     //中间数p
    	    int mid = num[p - 1];
    	    num[p - 1] = num[a];
    	    num[a] = mid;
    	    flag ++;
        }
        else
            a ++;
    }
    printf("%d", flag);
    return 0;
}
