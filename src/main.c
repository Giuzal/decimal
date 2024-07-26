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

void set_sign(s21_decimal *num, int sign)
{
    num->bits[3] |= sign << 31;
}

void set_scale(s21_decimal *num, int scale)
{
    num->bits[3] |= scale << 16;
}

int main()
{
    s21_decimal(num) = {1, 1, 1, 0};
    set_sign(&num, 1);
    set_scale(&num, 3);
    print_decimal(num);
    s21_decimal(num2) = {3, 4, 213, 0};

    
    return 0;
}