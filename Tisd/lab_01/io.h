#ifndef IO_H_
#define IO_H_

#include "libmy.h"

int input_number();
int mantissa_input(char *mantissa);
int order_input(int *order);
int sign_input(char *sign);
int struct_input(struct long_number_t *long_number);

#endif // IO_H_