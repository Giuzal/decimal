#include <stdio.h>

#include "s21_decimal.h"

void print_binary(int num)
{
    for(int i = 31; i >= 0; i--){
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int num = 0;
    printf("enter a num\n");
    scanf("%d", &num);
    print_binary(num);
    return 0;
}