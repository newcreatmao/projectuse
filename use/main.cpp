#include <wiringPi.h>
#include <stdio.h>

#define pin 7

int main()
{
    int cmd;
    if (wiringPiSetup() == -1)
    {
        printf("init failt!!!\n");
        return -1;
    }
    pinMode(pin, OUTPUT);    // ���ģʽ
    digitalWrite(pin, HIGH); // pin��������ߵ�ƽ

    while (1)
    {
        printf("input 0 or 1:\n");
        scanf("%d", &cmd);
        // getchar();
        if (cmd == 0)
        {
            printf("output low\n\n");
            digitalWrite(pin, LOW); // pin��������͵�ƽ
        }
        else if (cmd == 1)
        {
            printf("output high\n\n");
            digitalWrite(pin, HIGH); // pin��������ߵ�ƽ
        }
        else
        {
            printf("input error\n\n");
        }
    }
    return 0;
}
