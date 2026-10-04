#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int A, B, C;
    int condition;
    printf("Введите значение A, B и C в кг: ");
    scanf("%d %d %d", &A, &B, &C);
    condition = (A % 5 == 0) && (B % 5 == 0) && (C % 5 == 0);
    printf("Разрешение на загрузку (1 - да, 0 - не): %d\n", condition);
    return 0;
}