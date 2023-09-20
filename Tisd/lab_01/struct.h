#ifndef STRUCT_H_
#define STRUCT_H_

#include "libmy.h"

struct long_number_t 
{
    char mantissa_sign;
    char mantissa[ARR_LEN];
    char order_sign;
    int order;
};



#endif //STRUCT_H_