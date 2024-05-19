#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define VNAME(value) (#value)

#define CHECK_BIT(data, n) ((data >> n) & 0x1)

//  在 Linux 内核和其他地方的许多（如果不是大多数）宏中都可以看到do
//  /while(0)模式， 它们都有特定的用途：它是 C
//  中唯一允许您定义始终以相同方式工作的宏的构造，
//  因此后面的分号无论宏如何使用，您的宏始终具有相同的效果（特别强调将宏嵌套在不带花括号的
//  if 中的问题）。
/**
 * @brief 输出二进制序列
 * */
#define PRINT_BIT(n)                                 \
    do                                               \
    {                                                \
        printf("[%s]:", VNAME(n));                   \
        for (int i = sizeof(n) * 8 - 1; i >= 0; i--) \
        {                                            \
            printf("%1d", 1 & n >> i);               \
            if (i % 8 == 0)                          \
            {                                        \
                printf(" ");                         \
            }                                        \
        }                                            \
        printf("b\n");                               \
    } while (0)

#define PRINT_OCT(n)                                    \
    do                                                  \
    {                                                   \
        for (int i = sizeof(n) * 8 - 1; i >= 0; i -= 8) \
        {                                               \
            printf("\\%o", 0xFF & (n >> i / 8 * 8));    \
        }                                               \
        printf("");                                     \
    } while (0)

#define PRINT_BYTE(n)                                   \
    do                                                  \
    {                                                   \
        printf("[%s]:", VNAME(n));                      \
        for (int i = sizeof(n) * 8 - 1; i >= 0; i -= 4) \
        {                                               \
            printf("%1x", 0xF & (n >> i / 4 * 4));      \
        }                                               \
        printf("h\n");                                  \
    } while (0)
void utf8ToHex(const char *utf8Str, char *hexStr)
{
    printf("\"");

    for (int i = 0; utf8Str[i] != '\0'; i++)
    {
        printf("%02x", 0xFF & utf8Str[i]);
        sprintf(&hexStr[i * 2], "%02x", 0xFF & utf8Str[i]);
    }
    printf("\"\n");
}
void hexToOctal(const char *hexStr)
{
    printf("\"");
    // 长度是偶数，否则无法按每两个字符转换
    if (strlen(hexStr) % 2 != 0)
    {
        printf("Input string length is not even.\n");
        return;
    }

    for (int i = 0; hexStr[i] != '\0' && hexStr[i + 1] != '\0'; i += 2)
    {
        uint8_t hexValue = 0;
        sscanf(&hexStr[i], "%02x", &hexValue);
        PRINT_OCT(hexValue);
    }
    printf("\"\n");
}
int main()
{
    // encode magic num
    // https://www.metools.info/learn/l120.html
    system("chcp 65001 & cls");
    const char *utf8Str = "";
    char hexStr_utf8[100];
    utf8ToHex(utf8Str, hexStr_utf8);
    hexToOctal(hexStr_utf8);
    // decode magic num
    char p[100] = "\347\231\273\345\275\225";
    printf(p);
    return 0;
}