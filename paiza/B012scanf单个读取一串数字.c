/* Paize B012
输入一串长度为16的数字，最右边的数字为第一位，这些数字有以下特性：
1.偶数位的数字各乘以2倍的总和为even
（但是，2倍之后如果是两位数则个位和十位的数相加作为一位数再相加得到总和）
2.奇数位的数总和为odd
even + odd 必定是10的倍数
第一位数为X，求X */

#include <stdio.h>
int main(void){
    int n, x, i, j;
    int even, odd, sum;
    int num[15];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        even = 0;
        odd = 0;
        sum = 0;
        for (j = 0; j < 15; j++)
           scanf("%1d", &num[j]); //注意：%1d控制scanf读入个数，%d则将回车前的一整行数字当成一个数
        getchar(); //释放掉x
        for (j = 1; j < 14; j += 2)
            odd += num[j];        //奇数位合计
        for (j = 0; j < 15; j += 2){
            num[j] = num[j] * 2;
            if (num[j] > 9){
                num[j] = 1 + num[j] % 10;
            }
            even += num[j];
        }
        sum = even + odd;
        if (sum % 10 != 0)
            x = 10 - sum % 10;
        else
            x = 0;
       printf("%d\n", x);
    }
    return 0;
}
