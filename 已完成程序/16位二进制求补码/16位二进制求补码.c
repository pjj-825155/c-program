#include <stdio.h>
 
//ԭ��ת��Ϊ���룬�����������1.��������2.����ԭ�����λ���䣬����λȡ����һ
int main(void)
{
    char bits[16];
    int i;
    for (i = 0; i < 16; i++)
    {
        bits[i] = getchar();
        if (bits[0] == '0') //���������ô���
        {
            continue;
        }
        if (bits[0] == '1') //����������λȡ��
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
     
    if (bits[0] == '1') //���������һλ��1
    {
        //�Ӻ���ǰ����
        for (i = 15; i >= 0; i--)
        {
            if (bits[i] == '0') //����'0'ʱ��Ϊ'1'���Ϳ����˳���
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
     
    //�������
    for (i = 0; i < 16; i++)
    {
        putchar(bits[i]);
    }
    printf("\n");
     
    return 0;
}
