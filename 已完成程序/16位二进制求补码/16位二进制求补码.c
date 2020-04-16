#include <stdio.h>
 
//原码转化为补码，分两种情况：1.正数不变2.负数原码符号位不变，其余位取反加一
int main(void)
{
    char bits[16];
    int i;
    for (i = 0; i < 16; i++)
    {
        bits[i] = getchar();
        if (bits[0] == '0') //正数，不用处理
        {
            continue;
        }
        if (bits[0] == '1') //负数，其余位取反
        {
            if (i > 0)
            {
                if (bits[i] == '1')
                    bits[i] = '0';
                else if (bits[i] == '0')
                    bits[i] = '1';
            }
        }
    }
     
    if (bits[0] == '1') //负数，最后一位加1
    {
        //从后往前遍历
        for (i = 15; i >= 0; i--)
        {
            if (bits[i] == '0') //碰到'0'时置为'1'，就可以退出了
            {
                bits[i] = '1';
                break; 
            }
            if (bits[i] == '1') 
            {
                bits[i] = '0';
            }
        }
    }
     
    //输出补码
    for (i = 0; i < 16; i++)
    {
        putchar(bits[i]);
    }
    printf("\n");
     
    return 0;
}
