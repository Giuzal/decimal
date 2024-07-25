#include <stdio.h>

#include "s21_decimal.h"

void print_binary(int num)
{
    for(int i = 31; i >= 0; i--){
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

void print_decimal(s21_decimal num){
    for(int i = 3; i >= 0; i--){
        print_binary(num.bits[i]);
    }
}

int main()
{
    s21_decimal(num) = {0};
    print_decimal(num);
    return 0;
}