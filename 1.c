#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[100];
    printf("パスワードを入力してください。:");
    if (scanf("%99s", s) != 1) return 0;
    size_t l = strlen(s);
    if (l < 8) {
        printf("パスワードを強くするためには、パスワードを8字以上にしてください。\n");
    }
    int a = 0; 
    int b = 0; 
    int d = 0; 
    for (size_t i = 0; i < l; i++) {
        unsigned char c = (unsigned char)s[i];
        if (isupper(c)) a = 1;
        if (islower(c)) b = 1;
        if (isdigit(c)) d = 1;
    }
    if (!a && !b) 
    {
        printf("パスワードを強くするためには、パスワードに小文字を入れてください。\n");
        printf("パスワードを強くするためには、パスワードに大文字を入れてください。\n");
    } 
    else 
    {
    if (a && !b) 
    {
        printf("パスワードを強くするためには、パスワードに小文字を入れてください。\n");
    }
    if (b && !a) 
    {
        printf("パスワードを強くするためには、パスワードに大文字を入れてください。\n");
    }
    }

    if (!d) 
    {
        printf("パスワードを強くするためには、数字を入力して下さい。\n");
    }
    if (l >= 8 && a && b && d) 
    {
        printf("強いパスワードです。\n");
    }
    return 0;
}
