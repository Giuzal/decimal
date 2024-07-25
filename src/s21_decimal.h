#ifndef SRC_S21_DECIMAL_H
#define SRC_S21_DECIMAL_H

typedef struct 
{
    int bits[4];
} s21_decimal;

void print_binary(int num);
void print_decimal(s21_decimal num);

#endif // !SRC_S21_DECIMAL_H