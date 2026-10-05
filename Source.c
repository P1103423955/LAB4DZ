#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int A, B, C;
    int condition;
    printf("Ââåäèòå çíà÷åíèå A, B è C â êã: ");
    scanf("%d %d %d", &A, &B, &C);
    condition = (A % 5 == 0) && (B % 5 == 0) && (C % 5 == 0);
    printf("Доступ разрешен  (1 - äà, 0 - íå): %d\n", condition);
    return 0;
}
