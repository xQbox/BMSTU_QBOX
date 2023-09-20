#ifndef BASIC_H_
#define BASIC_H_

#include "libmy.h"
#define ARR_LEN 100
int multiply(int *arr, size_t size_arr, int *arr1, size_t size_arr1);

int change_order(int *arr, size_t arr_size);

int mass_summ(int arr[ARR_LEN][ARR_LEN], size_t *row, size_t *column);

#endif // BASIC_H_